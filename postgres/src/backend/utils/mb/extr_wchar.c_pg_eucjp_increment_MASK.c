
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;



__attribute__((used)) static bool
FUNC_1(unsigned char *VAR_0, int VAR_1)
{
 unsigned char VAR_2,
    VAR_3;
 int VAR_4;

 VAR_2 = *VAR_0;

 switch (VAR_2)
 {
  case 129:
   if (VAR_1 != 2)
    return 0;

   VAR_3 = VAR_0[1];

   if (VAR_3 >= 0xdf)
    VAR_0[0] = VAR_0[1] = 0xa1;
   else if (VAR_3 < 0xa1)
    VAR_0[1] = 0xa1;
   else
    VAR_0[1]++;
   break;

  case 128:
   if (VAR_1 != 3)
    return 0;

   for (VAR_4 = 2; VAR_4 > 0; VAR_4--)
   {
    VAR_3 = VAR_0[VAR_4];
    if (VAR_3 < 0xa1)
    {
     VAR_0[VAR_4] = 0xa1;
     return 1;
    }
    else if (VAR_3 < 0xfe)
    {
     VAR_0[VAR_4]++;
     return 1;
    }
   }


   return 0;

  default:
   if (FUNC_0(VAR_2))
   {
    if (VAR_1 != 2)
     return 0;

    for (VAR_4 = 1; VAR_4 >= 0; VAR_4--)
    {
     VAR_3 = VAR_0[VAR_4];
     if (VAR_3 < 0xa1)
     {
      VAR_0[VAR_4] = 0xa1;
      return 1;
     }
     else if (VAR_3 < 0xfe)
     {
      VAR_0[VAR_4]++;
      return 1;
     }
    }


    return 0;
   }
   else
   {
    if (VAR_2 > 0x7e)
     return 0;
    (*VAR_0)++;
   }
   break;
 }

 return 1;
}
