
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_flags; int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int * backing_dev_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct address_space*,int,int) ;
 scalar_t__ FUNC_4 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_5 (struct file*,struct iov_iter*,int) ;
 int * FUNC_6 (struct inode*) ;
 int FUNC_7 (struct address_space*,int,int) ;
 int FUNC_8 (struct iov_iter*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;

ssize_t FUNC_11(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct file *VAR_5 = VAR_3->ki_filp;
 struct address_space * VAR_6 = VAR_5->f_mapping;
 struct inode *VAR_7 = VAR_6->host;
 ssize_t VAR_8 = 0;
 ssize_t VAR_9;
 ssize_t VAR_10;


 VAR_2->backing_dev_info = FUNC_6(VAR_7);
 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  goto out;

 if (VAR_3->ki_flags & VAR_0) {
  loff_t VAR_11, VAR_12;

  VAR_8 = FUNC_4(VAR_3, VAR_4);







  if (VAR_8 < 0 || !FUNC_8(VAR_4) || FUNC_0(VAR_7))
   goto out;

  VAR_10 = FUNC_5(VAR_5, VAR_4, VAR_11 = VAR_3->ki_pos);







  if (FUNC_10(VAR_10 < 0)) {
   VAR_9 = VAR_10;
   goto out;
  }





  VAR_12 = VAR_11 + VAR_10 - 1;
  VAR_9 = FUNC_3(VAR_6, VAR_11, VAR_12);
  if (VAR_9 == 0) {
   VAR_3->ki_pos = VAR_12 + 1;
   VAR_8 += VAR_10;
   FUNC_7(VAR_6,
       VAR_11 >> VAR_1,
       VAR_12 >> VAR_1);
  } else {




  }
 } else {
  VAR_8 = FUNC_5(VAR_5, VAR_4, VAR_3->ki_pos);
  if (FUNC_9(VAR_8 > 0))
   VAR_3->ki_pos += VAR_8;
 }
out:
 VAR_2->backing_dev_info = ((void*)0);
 return VAR_8 ? VAR_8 : VAR_9;
}
