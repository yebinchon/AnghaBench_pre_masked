
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serializer {struct file_output_data* data; } ;
struct file_output_data {struct file_output_data* temp_name; struct file_output_data* file_name; int file; } ;


 int FUNC_0 (struct file_output_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file_output_data*,struct file_output_data*) ;
 int FUNC_3 (struct file_output_data*) ;

void FUNC_4(struct serializer *VAR_0)
{
 struct file_output_data *VAR_1 = VAR_0->data;

 if (VAR_1) {
  FUNC_1(VAR_1->file);

  if (VAR_1->temp_name) {
   FUNC_3(VAR_1->file_name);
   FUNC_2(VAR_1->temp_name, VAR_1->file_name);
  }

  FUNC_0(VAR_1->file_name);
  FUNC_0(VAR_1->temp_name);
  FUNC_0(VAR_1);
 }
}
