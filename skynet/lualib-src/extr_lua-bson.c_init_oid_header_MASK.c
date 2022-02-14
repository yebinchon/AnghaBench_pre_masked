
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pid_t ;
typedef int hostname ;


 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3() {
 if (VAR_0) {

  return;
 }
 pid_t VAR_2 = FUNC_1();
 uint32_t VAR_3 = 0;
 char VAR_4[256];
 if (FUNC_0(VAR_4, sizeof(VAR_4))==0) {
  int VAR_5;
  for (VAR_5=0;VAR_5<sizeof(VAR_4) && VAR_4[VAR_5];VAR_5++) {
   VAR_3 = VAR_3 ^ ((VAR_3<<5)+(VAR_3>>2)+VAR_4[VAR_5]);
   }
  VAR_3 ^= VAR_5;
 }
 VAR_1[0] = VAR_3 & 0xff;
 VAR_1[1] = (VAR_3>>8) & 0xff;
 VAR_1[2] = (VAR_3>>16) & 0xff;
 VAR_1[3] = VAR_2 & 0xff;
 VAR_1[4] = (VAR_2 >> 8) & 0xff;

 uint32_t VAR_6 = VAR_3 ^ FUNC_2(((void*)0)) ^ (uintptr_t)&VAR_3;
 if (VAR_6 == 0) {
  VAR_6 = 1;
 }
 VAR_0 = VAR_6;
}
