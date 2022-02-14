
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;

__attribute__((used)) static pid_t FUNC_4(void)
{
 uint8_t *VAR_6;
 pid_t VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6) {
  FUNC_3("malloc(STACK_SIZE) failed: %m\n");
  FUNC_0();
 }

 VAR_7 = FUNC_1(VAR_5,
      VAR_6 + VAR_4,
      VAR_3 | VAR_0 | VAR_1 | VAR_2,
      ((void*)0));
 if (VAR_7 < 0) {
  FUNC_3("clone() failed: %m\n");
  FUNC_0();
 }

 return VAR_7;
}
