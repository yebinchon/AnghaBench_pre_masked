
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct cache_detail {int dummy; } ;
struct TYPE_2__ {struct cache_detail* private; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 long FUNC_1 (struct inode*,struct file*,unsigned int,unsigned long,struct cache_detail*) ;
 struct inode* FUNC_2 (struct file*) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_0,
         unsigned int VAR_1, unsigned long VAR_2)
{
 struct inode *VAR_3 = FUNC_2(VAR_0);
 struct cache_detail *VAR_4 = FUNC_0(VAR_3)->private;

 return FUNC_1(VAR_3, VAR_0, VAR_1, VAR_2, VAR_4);
}
