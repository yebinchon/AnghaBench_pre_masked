
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;


 int FUNC_0 (int ,int ,struct file*,int) ;
 int FUNC_1 (struct file*,int) ;
 int VAR_0 ;

int FUNC_2(struct file *VAR_1, enum kernel_read_file_id VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 return FUNC_1(VAR_1, VAR_2);
}
