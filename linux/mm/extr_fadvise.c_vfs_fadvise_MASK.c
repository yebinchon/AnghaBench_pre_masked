
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* fadvise ) (struct file*,int ,int ,int) ;} ;


 int FUNC_0 (struct file*,int ,int ,int) ;
 int FUNC_1 (struct file*,int ,int ,int) ;

int FUNC_2(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 if (VAR_0->f_op->fadvise)
  return VAR_0->f_op->fadvise(VAR_0, VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
