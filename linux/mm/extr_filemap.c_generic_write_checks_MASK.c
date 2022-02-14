
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_flags; int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ,int*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct iov_iter*,int) ;

inline ssize_t FUNC_5(struct kiocb *VAR_5, struct iov_iter *VAR_6)
{
 struct file *VAR_7 = VAR_5->ki_filp;
 struct inode *VAR_8 = VAR_7->f_mapping->host;
 loff_t VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_8))
  return -VAR_1;

 if (!FUNC_3(VAR_6))
  return 0;


 if (VAR_5->ki_flags & VAR_2)
  VAR_5->ki_pos = FUNC_2(VAR_8);

 if ((VAR_5->ki_flags & VAR_4) && !(VAR_5->ki_flags & VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_6);
 VAR_10 = FUNC_1(VAR_7, VAR_5->ki_pos, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_6, VAR_9);
 return FUNC_3(VAR_6);
}
