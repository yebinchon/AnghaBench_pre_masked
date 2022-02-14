
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ pid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,unsigned int,int *) ;
 int VAR_2 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static pid_t FUNC_4(unsigned int VAR_3)
{
 uint8_t *VAR_4;
 pid_t VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  FUNC_3("malloc(STACK_SIZE) failed: %m\n");
  FUNC_0();
 }

 VAR_5 = FUNC_1(VAR_2,
      VAR_4 + VAR_1,
      VAR_0 | VAR_3,
      ((void*)0));
 if (VAR_5 < 0) {
  FUNC_3("clone() failed: %m\n");
  FUNC_0();
 }

 return VAR_5;
}
