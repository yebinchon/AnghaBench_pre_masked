
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 char FUNC_2 (int,char**,char*,TYPE_1__*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 () ;

int FUNC_6(int VAR_4, char *VAR_5[])
{
 signed char VAR_6;
 while (1) {
  int VAR_7 = 0;

  VAR_6 = FUNC_2(VAR_4, VAR_5, "", VAR_2, &VAR_7);

  if (VAR_6 == -1)
   break;

  switch (VAR_6) {
  case 0:
   if (VAR_2[VAR_7].flag != 0)
    break;

   FUNC_5();
   FUNC_1(1);
   break;
  case 'i':
   VAR_0 = FUNC_0(VAR_1);
   break;
  default:
   FUNC_5();
   FUNC_1(1);
  }
 }

 FUNC_4(300);
 return FUNC_3(VAR_3, "mmap_bench");
}
