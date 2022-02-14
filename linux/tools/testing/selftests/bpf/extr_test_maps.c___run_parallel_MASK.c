
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int*,int ) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_0,
      void (*VAR_1)(unsigned int VAR_2, void *VAR_3),
      void *VAR_4)
{
 pid_t VAR_5[VAR_0];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5[VAR_6] = FUNC_2();
  if (VAR_5[VAR_6] == 0) {
   VAR_1(VAR_6, VAR_4);
   FUNC_1(0);
  } else if (VAR_5[VAR_6] == -1) {
   FUNC_3("Couldn't spawn #%d process!\n", VAR_6);
   FUNC_1(1);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  int VAR_7;

  FUNC_0(FUNC_4(VAR_5[VAR_6], &VAR_7, 0) == VAR_5[VAR_6]);
  FUNC_0(VAR_7 == 0);
 }
}
