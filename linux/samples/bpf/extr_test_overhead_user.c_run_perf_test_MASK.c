
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int,int*,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_0, int VAR_1)
{
 pid_t VAR_2[VAR_0];
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3] = FUNC_2();
  if (VAR_2[VAR_3] == 0) {
   FUNC_3(VAR_3, VAR_1);
   FUNC_1(0);
  } else if (VAR_2[VAR_3] == -1) {
   FUNC_4("couldn't spawn #%d process\n", VAR_3);
   FUNC_1(1);
  }
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  int VAR_4;

  FUNC_0(FUNC_5(VAR_2[VAR_3], &VAR_4, 0) == VAR_2[VAR_3]);
  FUNC_0(VAR_4 == 0);
 }
}
