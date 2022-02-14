
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {size_t ki_pos; int ki_flags; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_mode; int i_mapping; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {scalar_t__ nrpages; TYPE_1__* a_ops; struct inode* host; } ;
typedef int ssize_t ;
typedef size_t pgoff_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int (* direct_IO ) (struct kiocb*,struct iov_iter*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,size_t,size_t) ;
 int FUNC_2 (struct address_space*,size_t,size_t) ;
 size_t FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,size_t) ;
 int FUNC_5 (struct address_space*,size_t,size_t) ;
 size_t FUNC_6 (struct iov_iter*) ;
 int FUNC_7 (struct iov_iter*,size_t) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct kiocb*,struct iov_iter*) ;

ssize_t
FUNC_10(struct kiocb *VAR_4, struct iov_iter *VAR_5)
{
 struct file *VAR_6 = VAR_4->ki_filp;
 struct address_space *VAR_7 = VAR_6->f_mapping;
 struct inode *VAR_8 = VAR_7->host;
 loff_t VAR_9 = VAR_4->ki_pos;
 ssize_t VAR_10;
 size_t VAR_11;
 pgoff_t VAR_12;

 VAR_11 = FUNC_6(VAR_5);
 VAR_12 = (VAR_9 + VAR_11 - 1) >> VAR_3;

 if (VAR_4->ki_flags & VAR_2) {

  if (FUNC_1(VAR_8->i_mapping, VAR_9,
        VAR_9 + VAR_11 - 1))
   return -VAR_0;
 } else {
  VAR_10 = FUNC_2(VAR_7, VAR_9,
       VAR_9 + VAR_11 - 1);
  if (VAR_10)
   goto out;
 }







 VAR_10 = FUNC_5(VAR_7,
     VAR_9 >> VAR_3, VAR_12);




 if (VAR_10) {
  if (VAR_10 == -VAR_1)
   return 0;
  goto out;
 }

 VAR_10 = VAR_7->a_ops->direct_IO(VAR_4, VAR_5);
 if (VAR_7->nrpages)
  FUNC_5(VAR_7,
     VAR_9 >> VAR_3, VAR_12);

 if (VAR_10 > 0) {
  VAR_9 += VAR_10;
  VAR_11 -= VAR_10;
  if (VAR_9 > FUNC_3(VAR_8) && !FUNC_0(VAR_8->i_mode)) {
   FUNC_4(VAR_8, VAR_9);
   FUNC_8(VAR_8);
  }
  VAR_4->ki_pos = VAR_9;
 }
 FUNC_7(VAR_5, VAR_11 - FUNC_6(VAR_5));
out:
 return VAR_10;
}
