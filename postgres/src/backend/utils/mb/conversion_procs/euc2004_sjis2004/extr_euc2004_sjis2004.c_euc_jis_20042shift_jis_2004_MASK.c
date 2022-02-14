
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const unsigned char *VAR_3, unsigned char *VAR_4, int VAR_5)
{
 int VAR_6,
    VAR_7,
    VAR_8;
 int VAR_9;

 while (VAR_5 > 0)
 {
  VAR_6 = *VAR_3;
  if (!FUNC_0(VAR_6))
  {

   if (VAR_6 == 0)
    FUNC_2(VAR_0,
          (const char *) VAR_3, VAR_5);
   *VAR_4++ = VAR_6;
   VAR_3++;
   VAR_5--;
   continue;
  }

  VAR_9 = FUNC_1(VAR_0, (const char *) VAR_3, VAR_5);

  if (VAR_9 < 0)
   FUNC_2(VAR_0,
         (const char *) VAR_3, VAR_5);

  if (VAR_6 == VAR_1 && VAR_9 == 2)
  {
   *VAR_4++ = VAR_3[1];
  }
  else if (VAR_6 == VAR_2 && VAR_9 == 3)
  {
   VAR_7 = VAR_3[1] - 0xa0;
   VAR_8 = VAR_3[2] - 0xa0;

   switch (VAR_7)
   {
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
    case 12:
    case 13:
    case 14:
    case 15:
     *VAR_4++ = ((VAR_7 + 0x1df) >> 1) - (VAR_7 >> 3) * 3;
     break;
    default:
     if (VAR_7 >= 78 && VAR_7 <= 94)
     {
      *VAR_4++ = (VAR_7 + 0x19b) >> 1;
     }
     else
      FUNC_2(VAR_0,
            (const char *) VAR_3, VAR_5);
   }

   if (VAR_7 % 2)
   {
    if (VAR_8 >= 1 && VAR_8 <= 63)
     *VAR_4++ = VAR_8 + 0x3f;
    else if (VAR_8 >= 64 && VAR_8 <= 94)
     *VAR_4++ = VAR_8 + 0x40;
    else
     FUNC_2(VAR_0,
           (const char *) VAR_3, VAR_5);
   }
   else
    *VAR_4++ = VAR_8 + 0x9e;
  }

  else if (VAR_9 == 2)
  {
   VAR_7 = VAR_6 - 0xa0;
   VAR_8 = VAR_3[1] - 0xa0;

   if (VAR_7 >= 1 && VAR_7 <= 62)
    *VAR_4++ = (VAR_7 + 0x101) >> 1;
   else if (VAR_7 >= 63 && VAR_7 <= 94)
    *VAR_4++ = (VAR_7 + 0x181) >> 1;
   else
    FUNC_2(VAR_0,
          (const char *) VAR_3, VAR_5);

   if (VAR_7 % 2)
   {
    if (VAR_8 >= 1 && VAR_8 <= 63)
     *VAR_4++ = VAR_8 + 0x3f;
    else if (VAR_8 >= 64 && VAR_8 <= 94)
     *VAR_4++ = VAR_8 + 0x40;
    else
     FUNC_2(VAR_0,
           (const char *) VAR_3, VAR_5);
   }
   else
    *VAR_4++ = VAR_8 + 0x9e;
  }
  else
   FUNC_2(VAR_0,
         (const char *) VAR_3, VAR_5);

  VAR_3 += VAR_9;
  VAR_5 -= VAR_9;
 }
 *VAR_4 = '\0';
}
