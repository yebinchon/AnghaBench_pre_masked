
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int vcpu_id; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,struct kvm_vcpu*,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_4)
{
 char VAR_5[8 + 1 + VAR_0 + 1];

 FUNC_1(VAR_5, sizeof(VAR_5), "kvm-vcpu:%d", VAR_4->vcpu_id);
 return FUNC_0(VAR_5, &VAR_3, VAR_4, VAR_2 | VAR_1);
}
