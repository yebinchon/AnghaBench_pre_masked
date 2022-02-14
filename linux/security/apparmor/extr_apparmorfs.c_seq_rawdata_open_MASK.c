
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
struct inode {int i_private; } ;
struct file {scalar_t__ private_data; } ;
struct aa_loaddata {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct aa_loaddata* FUNC_1 (int ) ;
 int FUNC_2 (struct aa_loaddata*) ;
 int FUNC_3 (struct file*,int (*) (struct seq_file*,void*),struct aa_loaddata*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2,
       int (*VAR_3)(struct seq_file *, void *))
{
 struct aa_loaddata *VAR_4 = FUNC_1(VAR_1->i_private);
 int VAR_5;

 if (!VAR_4)

  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2->private_data &&
         ((struct seq_file *)VAR_2->private_data)->private);
  FUNC_2(VAR_4);
 }

 return VAR_5;
}
