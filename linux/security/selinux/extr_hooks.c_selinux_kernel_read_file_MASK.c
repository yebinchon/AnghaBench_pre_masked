
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;



 int FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0,
        enum kernel_read_file_id VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 128:
  VAR_2 = FUNC_0(VAR_0);
  break;
 default:
  break;
 }

 return VAR_2;
}
