
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int*,int ) ;

__attribute__((used)) static void FUNC_7(int VAR_0)
{
 pid_t VAR_1[VAR_0];
 int VAR_2;

 FUNC_0(!FUNC_4(VAR_0));

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1[VAR_2] = FUNC_2();
  if (VAR_1[VAR_2] == 0) {
   FUNC_3(VAR_2);
   FUNC_1(0);
  } else if (VAR_1[VAR_2] == -1) {
   FUNC_5("couldn't spawn #%d process\n", VAR_2);
   FUNC_1(1);
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  int VAR_3;

  FUNC_0(FUNC_6(VAR_1[VAR_2], &VAR_3, 0) == VAR_1[VAR_2]);
  FUNC_0(VAR_3 == 0);
 }
}
