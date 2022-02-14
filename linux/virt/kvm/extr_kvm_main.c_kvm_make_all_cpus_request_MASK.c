
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*,unsigned int,int *,int ) ;
 int FUNC_2 (int *,int ) ;

bool FUNC_3(struct kvm *VAR_1, unsigned int VAR_2)
{
 cpumask_var_t VAR_3;
 bool VAR_4;

 FUNC_2(&VAR_3, VAR_0);

 VAR_4 = FUNC_1(VAR_1, VAR_2, ((void*)0), VAR_3);

 FUNC_0(VAR_3);
 return VAR_4;
}
