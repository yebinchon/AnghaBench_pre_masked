
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int debugfs_dentry; } ;


 int FUNC_0 (char*,int,int ,struct kvm*,int *) ;
 int VAR_0 ;

void FUNC_1(struct kvm *VAR_1)
{
 FUNC_0("vgic-state", 0444, VAR_1->debugfs_dentry, VAR_1,
       &VAR_0);
}
