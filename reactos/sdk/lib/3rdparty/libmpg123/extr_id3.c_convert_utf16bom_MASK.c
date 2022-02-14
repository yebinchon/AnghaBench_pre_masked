
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int fill; int * p; } ;
typedef TYPE_1__ mpg123_string ;


 unsigned long FUNC_0 (unsigned long,unsigned short) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned char const**,size_t*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_7(mpg123_string *VAR_0, const unsigned char* VAR_1, size_t VAR_2, const int VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;
 unsigned char *VAR_6;
 size_t VAR_7 = 0;

 size_t VAR_8 = 0;
 size_t VAR_9 = 1;
 int VAR_10;

 FUNC_3("convert_utf16 with length %lu", (unsigned long)VAR_2);

 VAR_10 = FUNC_2(&VAR_1, &VAR_2);
 FUNC_3("UTF16 endianness check: %i", VAR_10);

 if(VAR_10 == -1)
 {
  VAR_8 = 1;
  VAR_9 = 0;
 }

 VAR_5 = (VAR_2/2)*2;


 for(VAR_4=0; VAR_4 < VAR_5; VAR_4+=2)
 {
  unsigned long VAR_11 = ((unsigned long) VAR_1[VAR_4+VAR_8]<<8) + VAR_1[VAR_4+VAR_9];
  if((VAR_11 & 0xfc00) == 0xd800)
  {
   unsigned short VAR_12 = (VAR_4+3 < VAR_2) ? (VAR_1[VAR_4+2+VAR_8]<<8) + VAR_1[VAR_4+2+VAR_9] : 0;
   if((VAR_12 & 0xfc00) == 0xdc00)
   {
    VAR_11 = FUNC_0(VAR_11,VAR_12);
    VAR_7 += FUNC_1(VAR_11);
    VAR_4+=2;
   }
   else
   {
    if(VAR_3) FUNC_4("Invalid UTF16 surrogate pair at %li (0x%04lx).", (unsigned long)VAR_4, VAR_11);
    VAR_5 = VAR_4;
    break;
   }
  }
  else VAR_7 += FUNC_1(VAR_11);
 }

 if(!FUNC_6(VAR_0, VAR_7+1)){ FUNC_5(VAR_0); return ; }


 VAR_6 = (unsigned char*) VAR_0->p;
 for(VAR_4=0; VAR_4 < VAR_5; VAR_4+=2)
 {
  unsigned long VAR_13 = ((unsigned long) VAR_1[VAR_4+VAR_8]<<8) + VAR_1[VAR_4+VAR_9];
  if((VAR_13 & 0xfc00) == 0xd800)
  {
   unsigned short VAR_14 = (VAR_1[VAR_4+2+VAR_8]<<8) + VAR_1[VAR_4+2+VAR_9];
   VAR_13 = FUNC_0(VAR_13,VAR_14);
   VAR_4+=2;
  }
  if(VAR_13 < 0x80) *VAR_6++ = (unsigned char) VAR_13;
  else if(VAR_13 < 0x800)
  {
   *VAR_6++ = (unsigned char) (0xc0 | (VAR_13>>6));
   *VAR_6++ = (unsigned char) (0x80 | (VAR_13 & 0x3f));
  }
  else if(VAR_13 < 0x10000)
  {
   *VAR_6++ = (unsigned char) (0xe0 | (VAR_13>>12));
   *VAR_6++ = 0x80 | ((VAR_13>>6) & 0x3f);
   *VAR_6++ = 0x80 | (VAR_13 & 0x3f);
  }
  else if (VAR_13 < 0x200000)
  {
   *VAR_6++ = (unsigned char) (0xf0 | VAR_13>>18);
   *VAR_6++ = (unsigned char) (0x80 | ((VAR_13>>12) & 0x3f));
   *VAR_6++ = (unsigned char) (0x80 | ((VAR_13>>6) & 0x3f));
   *VAR_6++ = (unsigned char) (0x80 | (VAR_13 & 0x3f));
  }
 }
 VAR_0->p[VAR_0->size-1] = 0;
 VAR_0->fill = VAR_0->size;
}
