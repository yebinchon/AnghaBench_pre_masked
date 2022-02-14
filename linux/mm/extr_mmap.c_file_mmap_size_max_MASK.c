
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_mode; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static inline u64 FUNC_3(struct file *VAR_3, struct inode *VAR_4)
{
 if (FUNC_1(VAR_4->i_mode))
  return VAR_1;

 if (FUNC_0(VAR_4->i_mode))
  return VAR_1;

 if (FUNC_2(VAR_4->i_mode))
  return VAR_1;


 if (VAR_3->f_mode & VAR_0)
  return 0;


 return VAR_2;
}
