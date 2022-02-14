
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_private; } ;
struct file {int * private_data; } ;
struct aa_proxy {int dummy; } ;


 struct aa_proxy* FUNC_0 (int ) ;
 int FUNC_1 (struct aa_proxy*) ;
 int FUNC_2 (struct file*,int (*) (struct seq_file*,void*),struct aa_proxy*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1,
       int (*VAR_2)(struct seq_file *, void *))
{
 struct aa_proxy *VAR_3 = FUNC_0(VAR_0->i_private);
 int VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

 if (VAR_4) {
  VAR_1->private_data = ((void*)0);
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
