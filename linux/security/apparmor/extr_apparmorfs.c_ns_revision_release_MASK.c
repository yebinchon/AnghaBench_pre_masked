
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct aa_revision* private_data; } ;
struct aa_revision {int ns; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct aa_revision*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct aa_revision *VAR_2 = VAR_1->private_data;

 if (VAR_2) {
  FUNC_0(VAR_2->ns);
  FUNC_1(VAR_2);
 }

 return 0;
}
