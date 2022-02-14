
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_2 (struct kiocb*,scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

ssize_t FUNC_5(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 struct file *VAR_2 = VAR_0->ki_filp;
 struct inode *VAR_3 = VAR_2->f_mapping->host;
 ssize_t VAR_4;

 FUNC_3(VAR_3);
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 > 0)
  VAR_4 = FUNC_0(VAR_0, VAR_1);
 FUNC_4(VAR_3);

 if (VAR_4 > 0)
  VAR_4 = FUNC_2(VAR_0, VAR_4);
 return VAR_4;
}
