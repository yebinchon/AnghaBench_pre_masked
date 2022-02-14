
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_signed_vma ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2, bfd_vma VAR_3)
{
  if (VAR_0)
    {
      if (VAR_2)
 {
   char VAR_4[30];
   int VAR_5;
   VAR_1[0] = '0';
   VAR_1[1] = 'x';
   FUNC_1 (VAR_4, VAR_3);
   for (VAR_5 = 0; VAR_4[VAR_5] == '0' && VAR_4[VAR_5 + 1]; VAR_5++);
   FUNC_2 (VAR_1 + 2, VAR_4 + VAR_5);
 }
      else
 {
   bfd_signed_vma VAR_6 = VAR_3;
   char VAR_7[30];
   int VAR_8;
   if (VAR_6 < 0)
     {
       *(VAR_1++) = '-';
       VAR_6 = -VAR_3;

       if (VAR_6 < 0)
  {
    FUNC_2 (VAR_1, "9223372036854775808");
    return;
  }
     }
   if (!VAR_6)
     {
       FUNC_2 (VAR_1, "0");
       return;
     }

   VAR_8 = 0;
   VAR_7[29] = 0;
   while (VAR_6)
     {
       VAR_7[28 - VAR_8] = (VAR_6 % 10) + '0';
       VAR_6 /= 10;
       VAR_8++;
     }
   FUNC_2 (VAR_1, VAR_7 + 29 - VAR_8);
 }
    }
  else
    {
      if (VAR_2)
 FUNC_0 (VAR_1, "0x%x", (unsigned int) VAR_3);
      else
 FUNC_0 (VAR_1, "%d", (int) VAR_3);
    }
}
