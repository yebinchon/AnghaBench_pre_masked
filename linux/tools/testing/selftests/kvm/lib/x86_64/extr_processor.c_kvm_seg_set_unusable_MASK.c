
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_segment {int unusable; } ;


 int FUNC_0 (struct kvm_segment*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_segment *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->unusable = 1;
}
