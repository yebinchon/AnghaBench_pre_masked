
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef unsigned int Size ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*,char*,unsigned int*,char*) ;

__attribute__((used)) static void
FUNC_4(Size *VAR_1, int *VAR_2)
{







 *VAR_1 = 2 * 1024 * 1024;
 *VAR_2 = VAR_0;
 {
  FILE *VAR_3 = FUNC_0("/proc/meminfo", "r");
  char VAR_4[128];
  unsigned int VAR_5;
  char VAR_6;

  if (VAR_3)
  {
   while (FUNC_2(VAR_4, sizeof(VAR_4), VAR_3))
   {
    if (FUNC_3(VAR_4, "Hugepagesize: %u %c", &VAR_5, &VAR_6) == 2)
    {
     if (VAR_6 == 'k')
     {
      *VAR_1 = VAR_5 * (Size) 1024;
      break;
     }

    }
   }
   FUNC_1(VAR_3);
  }
 }

}
