
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_stat_data {int kvm; } ;
struct inode {scalar_t__ i_private; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct kvm_stat_data *VAR_2 = (struct kvm_stat_data *)
       VAR_0->i_private;

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2->kvm);

 return 0;
}
