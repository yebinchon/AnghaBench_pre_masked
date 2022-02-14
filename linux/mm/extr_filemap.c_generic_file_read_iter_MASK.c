
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_flags; scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {TYPE_1__* a_ops; struct inode* host; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {size_t (* direct_IO ) (struct kiocb*,struct iov_iter*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 size_t FUNC_3 (struct address_space*,scalar_t__,scalar_t__) ;
 size_t FUNC_4 (struct kiocb*,struct iov_iter*,size_t) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 size_t FUNC_6 (struct iov_iter*) ;
 int FUNC_7 (struct iov_iter*,size_t) ;
 size_t FUNC_8 (struct kiocb*,struct iov_iter*) ;

ssize_t
FUNC_9(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 size_t VAR_5 = FUNC_6(VAR_4);
 ssize_t VAR_6 = 0;

 if (!VAR_5)
  goto out;

 if (VAR_3->ki_flags & VAR_1) {
  struct file *VAR_7 = VAR_3->ki_filp;
  struct address_space *VAR_8 = VAR_7->f_mapping;
  struct inode *VAR_9 = VAR_8->host;
  loff_t VAR_10;

  VAR_10 = FUNC_5(VAR_9);
  if (VAR_3->ki_flags & VAR_2) {
   if (FUNC_2(VAR_8, VAR_3->ki_pos,
         VAR_3->ki_pos + VAR_5 - 1))
    return -VAR_0;
  } else {
   VAR_6 = FUNC_3(VAR_8,
      VAR_3->ki_pos,
             VAR_3->ki_pos + VAR_5 - 1);
   if (VAR_6 < 0)
    goto out;
  }

  FUNC_1(VAR_7);

  VAR_6 = VAR_8->a_ops->direct_IO(VAR_3, VAR_4);
  if (VAR_6 >= 0) {
   VAR_3->ki_pos += VAR_6;
   VAR_5 -= VAR_6;
  }
  FUNC_7(VAR_4, VAR_5 - FUNC_6(VAR_4));
  if (VAR_6 < 0 || !VAR_5 || VAR_3->ki_pos >= VAR_10 ||
      FUNC_0(VAR_9))
   goto out;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_6);
out:
 return VAR_6;
}
