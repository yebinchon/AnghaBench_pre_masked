
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32 ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (char*,int ,int) ;

int
FUNC_2(const char *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5;
 const char *VAR_6,
      *VAR_7 = VAR_1 + VAR_2;
 int VAR_8 = 2;
 uint32 VAR_9 = 0;

 VAR_6 = VAR_1;
 VAR_5 = VAR_3;

 while (VAR_6 < VAR_7)
 {
  VAR_9 |= (unsigned char) *VAR_6 << (VAR_8 << 3);
  VAR_8--;
  VAR_6++;


  if (VAR_8 < 0)
  {




   if ((VAR_5 - VAR_3 + 4) > VAR_4)
    goto error;

   *VAR_5++ = VAR_0[(VAR_9 >> 18) & 0x3f];
   *VAR_5++ = VAR_0[(VAR_9 >> 12) & 0x3f];
   *VAR_5++ = VAR_0[(VAR_9 >> 6) & 0x3f];
   *VAR_5++ = VAR_0[VAR_9 & 0x3f];

   VAR_8 = 2;
   VAR_9 = 0;
  }
 }
 if (VAR_8 != 2)
 {




  if ((VAR_5 - VAR_3 + 4) > VAR_4)
   goto error;

  *VAR_5++ = VAR_0[(VAR_9 >> 18) & 0x3f];
  *VAR_5++ = VAR_0[(VAR_9 >> 12) & 0x3f];
  *VAR_5++ = (VAR_8 == 0) ? VAR_0[(VAR_9 >> 6) & 0x3f] : '=';
  *VAR_5++ = '=';
 }

 FUNC_0((VAR_5 - VAR_3) <= VAR_4);
 return VAR_5 - VAR_3;

error:
 FUNC_1(VAR_3, 0, VAR_4);
 return -1;
}
