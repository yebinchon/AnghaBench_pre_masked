
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int **) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*) ;
 int ** VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_1 = FUNC_0(VAR_0);
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4("echo ' #'; echo ' # Running test on: '$(uname -a); echo ' #'");
 FUNC_1(VAR_2 < 0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_3(VAR_0[VAR_3][0], VAR_0[VAR_3] + 1);
 }

 FUNC_2("\n");

 return 0;
}
