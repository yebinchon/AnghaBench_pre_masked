
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct pipe_inode_info {int dummy; } ;
struct file {struct socket* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int (* splice_read ) (struct socket*,int *,struct pipe_inode_info*,size_t,unsigned int) ;} ;


 int FUNC_0 (struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 int FUNC_1 (struct socket*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_0, loff_t *VAR_1,
    struct pipe_inode_info *VAR_2, size_t VAR_3,
    unsigned int VAR_4)
{
 struct socket *VAR_5 = VAR_0->private_data;

 if (FUNC_2(!VAR_5->ops->splice_read))
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5->ops->splice_read(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
