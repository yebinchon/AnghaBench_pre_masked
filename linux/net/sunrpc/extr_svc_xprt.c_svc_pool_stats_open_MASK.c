
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int dummy; } ;
struct seq_file {struct svc_serv* private; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (struct file*,int *) ;
 int VAR_0 ;

int FUNC_1(struct svc_serv *VAR_1, struct file *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_0);
 if (!VAR_3)
  ((struct seq_file *) VAR_2->private_data)->private = VAR_1;
 return VAR_3;
}
