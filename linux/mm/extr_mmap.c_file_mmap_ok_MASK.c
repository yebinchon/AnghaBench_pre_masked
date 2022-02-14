
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct file*,struct inode*) ;

__attribute__((used)) static inline bool FUNC_1(struct file *VAR_1, struct inode *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_1, VAR_2);

 if (VAR_5 && VAR_4 > VAR_5)
  return 0;
 VAR_5 -= VAR_4;
 if (VAR_3 > VAR_5 >> VAR_0)
  return 0;
 return 1;
}
