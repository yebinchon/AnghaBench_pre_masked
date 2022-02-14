
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_nested_state {int flags; int size; scalar_t__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_nested_state*,int ,int) ;

void FUNC_1(struct kvm_nested_state *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->flags = VAR_1 |
         VAR_0;
 VAR_2->format = 0;
 VAR_2->size = sizeof(*VAR_2);
}
