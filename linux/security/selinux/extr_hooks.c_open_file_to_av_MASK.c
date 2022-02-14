
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_magic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline u32 FUNC_3(struct file *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2);
 struct inode *VAR_4 = FUNC_0(VAR_2);

 if (FUNC_2() &&
     VAR_4->i_sb->s_magic != VAR_1)
  VAR_3 |= VAR_0;

 return VAR_3;
}
