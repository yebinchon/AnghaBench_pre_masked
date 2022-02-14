
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct iov_iter {int dummy; } ;
struct msghdr {struct iov_iter msg_iter; int msg_flags; struct kiocb* msg_iocb; } ;
struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct file {int f_flags; struct socket* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iov_iter*) ;
 int FUNC_1 (struct socket*,struct msghdr*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct file *VAR_5 = VAR_3->ki_filp;
 struct socket *VAR_6 = VAR_5->private_data;
 struct msghdr VAR_7 = {.msg_iter = *VAR_4,
        .msg_iocb = VAR_3};
 ssize_t VAR_8;

 if (VAR_5->f_flags & VAR_2)
  VAR_7.msg_flags = VAR_1;

 if (VAR_3->ki_pos != 0)
  return -VAR_0;

 if (!FUNC_0(VAR_4))
  return 0;

 VAR_8 = FUNC_1(VAR_6, &VAR_7, VAR_7.msg_flags);
 *VAR_4 = VAR_7.msg_iter;
 return VAR_8;
}
