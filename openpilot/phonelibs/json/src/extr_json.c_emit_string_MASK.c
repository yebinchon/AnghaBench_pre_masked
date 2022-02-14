
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {char* cur; } ;
typedef TYPE_1__ SB ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int*,int*) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(SB *VAR_0, const char *VAR_1)
{
 bool VAR_2 = 0;
 const char *VAR_3 = VAR_1;
 char *VAR_4;

 FUNC_0(FUNC_5(VAR_1));





 FUNC_1(VAR_0, 14);
 VAR_4 = VAR_0->cur;

 *VAR_4++ = '"';
 while (*VAR_3 != 0) {
  unsigned char VAR_5 = *VAR_3++;


  switch (VAR_5) {
   case '"':
    *VAR_4++ = '\\';
    *VAR_4++ = '"';
    break;
   case '\\':
    *VAR_4++ = '\\';
    *VAR_4++ = '\\';
    break;
   case '\b':
    *VAR_4++ = '\\';
    *VAR_4++ = 'b';
    break;
   case '\f':
    *VAR_4++ = '\\';
    *VAR_4++ = 'f';
    break;
   case '\n':
    *VAR_4++ = '\\';
    *VAR_4++ = 'n';
    break;
   case '\r':
    *VAR_4++ = '\\';
    *VAR_4++ = 'r';
    break;
   case '\t':
    *VAR_4++ = '\\';
    *VAR_4++ = 't';
    break;
   default: {
    int VAR_6;

    VAR_3--;
    VAR_6 = FUNC_6(VAR_3);

    if (VAR_6 == 0) {
     FUNC_0(0);
     if (VAR_2) {
      FUNC_2(VAR_4, "\\uFFFD");
      VAR_4 += 6;
     } else {
      *VAR_4++ = 0xEF;
      *VAR_4++ = 0xBF;
      *VAR_4++ = 0xBD;
     }
     VAR_3++;
    } else if (VAR_5 < 0x1F || (VAR_5 >= 0x80 && VAR_2)) {

     uint32_t VAR_7;

     VAR_3 += FUNC_4(VAR_3, &VAR_7);

     if (VAR_7 <= 0xFFFF) {
      *VAR_4++ = '\\';
      *VAR_4++ = 'u';
      VAR_4 += FUNC_7(VAR_4, VAR_7);
     } else {

      uint16_t VAR_8, VAR_9;
      FUNC_0(VAR_7 <= 0x10FFFF);
      FUNC_3(VAR_7, &VAR_8, &VAR_9);
      *VAR_4++ = '\\';
      *VAR_4++ = 'u';
      VAR_4 += FUNC_7(VAR_4, VAR_8);
      *VAR_4++ = '\\';
      *VAR_4++ = 'u';
      VAR_4 += FUNC_7(VAR_4, VAR_9);
     }
    } else {

     while (VAR_6--)
      *VAR_4++ = *VAR_3++;
    }

    break;
   }
  }





  VAR_0->cur = VAR_4;
  FUNC_1(VAR_0, 14);
  VAR_4 = VAR_0->cur;
 }
 *VAR_4++ = '"';

 VAR_0->cur = VAR_4;
}
