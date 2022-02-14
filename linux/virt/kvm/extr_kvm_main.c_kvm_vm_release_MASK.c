
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct kvm* private_data; } ;


 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct kvm *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);

 FUNC_1(VAR_2);
 return 0;
}
