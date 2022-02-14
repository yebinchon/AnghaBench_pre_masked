
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct file*) ;
 int VAR_1 ;
 int FUNC_1 (struct file*,int ) ;

int FUNC_2(struct file *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2, VAR_0);
}
