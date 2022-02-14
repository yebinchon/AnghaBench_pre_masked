
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned int,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_0, &VAR_2, &VAR_3);

 if (VAR_4) {
  FUNC_1("can't get MSR_IA32_PERF_STATUS for cpu %d\n", VAR_1);
  FUNC_1("Possible trouble: you don't run an Enhanced SpeedStep capable cpu\n");
  FUNC_1("or you are not root, or the msr driver is not present\n");
  return 1;
 }

 FUNC_0(VAR_2);

 return 0;
}
