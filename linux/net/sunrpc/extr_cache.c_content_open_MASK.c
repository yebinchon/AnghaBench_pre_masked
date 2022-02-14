
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct cache_detail* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct cache_detail {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3,
   struct cache_detail *VAR_4)
{
 struct seq_file *VAR_5;
 int VAR_6;

 if (!VAR_4 || !FUNC_2(VAR_4->owner))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, &VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_4->owner);
  return VAR_6;
 }

 VAR_5 = VAR_3->private_data;
 VAR_5->private = VAR_4;
 return 0;
}
