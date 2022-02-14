
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_cap {void* lowest; void* efficient; void* guaranteed; void* highest; } ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (int,unsigned int,unsigned long long*) ;
 void* FUNC_5 (int ) ;

void FUNC_6(int VAR_0, struct msr_hwp_cap *VAR_1, unsigned int VAR_2)
{
 unsigned long long VAR_3;

 FUNC_4(VAR_0, VAR_2, &VAR_3);

 VAR_1->highest = FUNC_5(FUNC_1(VAR_3));
 VAR_1->guaranteed = FUNC_5(FUNC_0(VAR_3));
 VAR_1->efficient = FUNC_5(FUNC_3(VAR_3));
 VAR_1->lowest = FUNC_5(FUNC_2(VAR_3));
}
