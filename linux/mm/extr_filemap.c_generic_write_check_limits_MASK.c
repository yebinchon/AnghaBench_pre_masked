
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct file {int f_flags; TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {scalar_t__ s_maxbytes; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_7, loff_t VAR_8,
          loff_t *VAR_9)
{
 struct inode *VAR_10 = VAR_7->f_mapping->host;
 loff_t VAR_11 = VAR_10->i_sb->s_maxbytes;
 loff_t VAR_12 = FUNC_1(VAR_3);

 if (VAR_12 != VAR_4) {
  if (VAR_8 >= VAR_12) {
   FUNC_2(VAR_5, VAR_6, 0);
   return -VAR_0;
  }
  *VAR_9 = FUNC_0(*VAR_9, VAR_12 - VAR_8);
 }

 if (!(VAR_7->f_flags & VAR_2))
  VAR_11 = VAR_1;

 if (FUNC_3(VAR_8 >= VAR_11))
  return -VAR_0;

 *VAR_9 = FUNC_0(*VAR_9, VAR_11 - VAR_8);

 return 0;
}
