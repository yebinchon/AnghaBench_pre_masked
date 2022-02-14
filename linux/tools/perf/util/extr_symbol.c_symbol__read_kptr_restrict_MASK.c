
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(void)
{
 bool VAR_1 = 0;
 FILE *VAR_2 = FUNC_3("/proc/sys/kernel/kptr_restrict", "r");

 if (VAR_2 != ((void*)0)) {
  char VAR_3[8];

  if (FUNC_2(VAR_3, sizeof(VAR_3), VAR_2) != ((void*)0))
   VAR_1 = FUNC_4(VAR_0) ?
     (FUNC_0(VAR_3) >= 2) :
     (FUNC_0(VAR_3) != 0);

  FUNC_1(VAR_2);
 }




 if (FUNC_5() > 1 && !FUNC_4(VAR_0))
  VAR_1 = 1;

 return VAR_1;
}
