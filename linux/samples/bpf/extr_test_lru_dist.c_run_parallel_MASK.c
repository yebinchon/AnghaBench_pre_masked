
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int*,int ) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_0, void (*VAR_1)(int VAR_2, void *VAR_3),
    void *VAR_4)
{
 int VAR_5 = 0;
 pid_t VAR_6[VAR_0];
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6[VAR_7] = FUNC_2();
  if (VAR_6[VAR_7] == 0) {
   VAR_5 = FUNC_4(0, VAR_5);
   VAR_1(VAR_7, VAR_4);
   FUNC_1(0);
  } else if (VAR_6[VAR_7] == -1) {
   FUNC_3("couldn't spawn #%d process\n", VAR_7);
   FUNC_1(1);
  }




  VAR_5 = FUNC_4(VAR_6[VAR_7], VAR_5);
 }
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  int VAR_8;

  FUNC_0(FUNC_5(VAR_6[VAR_7], &VAR_8, 0) == VAR_6[VAR_7]);
  FUNC_0(VAR_8 == 0);
 }
}
