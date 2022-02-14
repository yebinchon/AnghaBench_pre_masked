
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_3, unsigned char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7,
    VAR_8,
    VAR_9;
 int VAR_10;
 int VAR_11;

 while (VAR_5 > 0)
 {
  VAR_6 = *VAR_3;

  if (!FUNC_0(VAR_6))
  {

   if (VAR_6 == 0)
    FUNC_3(VAR_0,
          (const char *) VAR_3, VAR_5);
   *VAR_4++ = VAR_6;
   VAR_3++;
   VAR_5--;
   continue;
  }

  VAR_11 = FUNC_2(VAR_0, (const char *) VAR_3, VAR_5);

  if (VAR_11 < 0 || VAR_11 > VAR_5)
   FUNC_3(VAR_0,
         (const char *) VAR_3, VAR_5);

  if (VAR_6 >= 0xa1 && VAR_6 <= 0xdf && VAR_11 == 1)
  {

   *VAR_4++ = VAR_1;
   *VAR_4++ = VAR_6;
  }
  else if (VAR_11 == 2)
  {
   int VAR_12 = VAR_3[1];

   VAR_10 = 1;
   VAR_7 = 1;
   VAR_8 = 1;




   if (VAR_6 >= 0x81 && VAR_6 <= 0x9f)
   {
    VAR_7 = (VAR_6 << 1) - 0x100;
    VAR_8 = FUNC_1(VAR_12, &VAR_9);
    if (VAR_8 < 0)
     FUNC_3(VAR_0,
           (const char *) VAR_3, VAR_5);
    VAR_7 -= VAR_9;
   }
   else if (VAR_6 >= 0xe0 && VAR_6 <= 0xef)
   {
    VAR_7 = (VAR_6 << 1) - 0x180;
    VAR_8 = FUNC_1(VAR_12, &VAR_9);
    if (VAR_8 < 0)
     FUNC_3(VAR_0,

           (const char *) VAR_3, VAR_5);
    VAR_7 -= VAR_9;
   }
   else if (VAR_6 >= 0xf0 && VAR_6 <= 0xf3)

   {
    VAR_10 = 2;
    VAR_8 = FUNC_1(VAR_12, &VAR_9);
    if (VAR_8 < 0)
     FUNC_3(VAR_0,
           (const char *) VAR_3, VAR_5);
    switch (VAR_6)
    {
     case 0xf0:
      VAR_7 = VAR_9 == 0 ? 8 : 1;
      break;
     case 0xf1:
      VAR_7 = VAR_9 == 0 ? 4 : 3;
      break;
     case 0xf2:
      VAR_7 = VAR_9 == 0 ? 12 : 5;
      break;
     default:
      VAR_7 = VAR_9 == 0 ? 14 : 13;
      break;
    }
   }
   else if (VAR_6 >= 0xf4 && VAR_6 <= 0xfc)
   {
    VAR_10 = 2;
    VAR_8 = FUNC_1(VAR_12, &VAR_9);
    if (VAR_8 < 0)
     FUNC_3(VAR_0,
           (const char *) VAR_3, VAR_5);
    if (VAR_6 == 0xf4 && VAR_9 == 1)
     VAR_7 = 15;
    else
     VAR_7 = (VAR_6 << 1) - 0x19a - VAR_9;
   }
   else
    FUNC_3(VAR_0,
          (const char *) VAR_3, VAR_5);

   if (VAR_10 == 2)
    *VAR_4++ = VAR_2;

   *VAR_4++ = VAR_7 + 0xa0;
   *VAR_4++ = VAR_8 + 0xa0;
  }
  VAR_3 += VAR_11;
  VAR_5 -= VAR_11;
 }
 *VAR_4 = '\0';
}
