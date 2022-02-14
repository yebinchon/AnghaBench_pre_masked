
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_private; } ;
struct file {struct aa_revision* private_data; } ;
struct aa_revision {scalar_t__ ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 struct aa_revision* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct aa_revision *VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);

 if (!VAR_4)
  return -VAR_0;

 VAR_4->ns = FUNC_1(VAR_2->i_private);
 if (!VAR_4->ns)
  VAR_4->ns = FUNC_0();
 VAR_3->private_data = VAR_4;

 return 0;
}
