
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_request {unsigned long long hwp_epp; unsigned long long hwp_window; unsigned long long hwp_use_pkg; void* hwp_desired; void* hwp_max; void* hwp_min; } ;


 int FUNC_0 (int,unsigned int,unsigned long long*) ;
 void* FUNC_1 (unsigned long long) ;

void FUNC_2(int VAR_0, struct msr_hwp_request *VAR_1, unsigned int VAR_2)
{
 unsigned long long VAR_3;

 FUNC_0(VAR_0, VAR_2, &VAR_3);

 VAR_1->hwp_min = FUNC_1((((VAR_3) >> 0) & 0xff));
 VAR_1->hwp_max = FUNC_1((((VAR_3) >> 8) & 0xff));
 VAR_1->hwp_desired = FUNC_1((((VAR_3) >> 16) & 0xff));
 VAR_1->hwp_epp = (((VAR_3) >> 24) & 0xff);
 VAR_1->hwp_window = (((VAR_3) >> 32) & 0x3ff);
 VAR_1->hwp_use_pkg = (((VAR_3) >> 42) & 0x1);
}
