
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {scalar_t__ s_blocksize; } ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct file*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

int FUNC_6(struct file *VAR_3, loff_t VAR_4,
    struct file *VAR_5, loff_t VAR_6,
    loff_t *VAR_7, unsigned int VAR_8)
{
 struct inode *VAR_9 = VAR_3->f_mapping->host;
 struct inode *VAR_10 = VAR_5->f_mapping->host;
 uint64_t VAR_11 = *VAR_7;
 uint64_t VAR_12;
 loff_t VAR_13, VAR_14;
 loff_t VAR_15 = VAR_10->i_sb->s_blocksize;
 int VAR_16;


 if (!FUNC_2(VAR_4, VAR_15) || !FUNC_2(VAR_6, VAR_15))
  return -VAR_0;


 if (VAR_4 + VAR_11 < VAR_4 || VAR_6 + VAR_11 < VAR_6)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_9);
 VAR_14 = FUNC_4(VAR_10);


 if ((VAR_8 & VAR_2) &&
     (VAR_4 >= VAR_13 || VAR_4 + VAR_11 > VAR_13 ||
      VAR_6 >= VAR_14 || VAR_6 + VAR_11 > VAR_14))
  return -VAR_0;


 if (VAR_4 >= VAR_13)
  return -VAR_0;
 VAR_11 = FUNC_5(VAR_11, VAR_13 - (uint64_t)VAR_4);

 VAR_16 = FUNC_3(VAR_5, VAR_6, &VAR_11);
 if (VAR_16)
  return VAR_16;
 if (VAR_4 + VAR_11 == VAR_13) {
  VAR_12 = FUNC_0(VAR_13, VAR_15) - VAR_4;
 } else {
  if (!FUNC_2(VAR_11, VAR_15))
   VAR_11 = FUNC_1(VAR_11, VAR_15);
  VAR_12 = VAR_11;
 }


 if (VAR_9 == VAR_10 &&
     VAR_6 + VAR_12 > VAR_4 &&
     VAR_6 < VAR_4 + VAR_12)
  return -VAR_0;





 if (*VAR_7 != VAR_11 && !(VAR_8 & VAR_1))
  return -VAR_0;

 *VAR_7 = VAR_11;
 return 0;
}
