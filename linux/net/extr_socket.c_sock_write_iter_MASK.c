
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; } ;
struct iov_iter {int dummy; } ;
struct msghdr {struct iov_iter msg_iter; int msg_flags; struct kiocb* msg_iocb; } ;
struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct file {int f_flags; struct socket* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct socket*,struct msghdr*) ;

__attribute__((used)) static ssize_t FUNC_1(struct kiocb *VAR_5, struct iov_iter *VAR_6)
{
 struct file *VAR_7 = VAR_5->ki_filp;
 struct socket *VAR_8 = VAR_7->private_data;
 struct msghdr VAR_9 = {.msg_iter = *VAR_6,
        .msg_iocb = VAR_5};
 ssize_t VAR_10;

 if (VAR_5->ki_pos != 0)
  return -VAR_0;

 if (VAR_7->f_flags & VAR_3)
  VAR_9.msg_flags = VAR_1;

 if (VAR_8->type == VAR_4)
  VAR_9.msg_flags |= VAR_2;

 VAR_10 = FUNC_0(VAR_8, &VAR_9);
 *VAR_6 = VAR_9.msg_iter;
 return VAR_10;
}
