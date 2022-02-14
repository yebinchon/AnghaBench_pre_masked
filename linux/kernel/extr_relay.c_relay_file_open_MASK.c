
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {int kref; } ;
struct inode {struct rchan_buf* i_private; } ;
struct file {struct rchan_buf* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct rchan_buf *VAR_2 = VAR_0->i_private;
 FUNC_0(&VAR_2->kref);
 VAR_1->private_data = VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
