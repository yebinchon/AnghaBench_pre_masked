
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ima_field_data {int dummy; } ;
typedef enum ima_show_type { ____Placeholder_ima_show_type } ima_show_type ;
typedef enum data_formats { ____Placeholder_data_formats } data_formats ;






 int FUNC_0 (struct seq_file*,int,int,struct ima_field_data*) ;
 int FUNC_1 (struct seq_file*,int,int,struct ima_field_data*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0,
      enum ima_show_type VAR_1,
      enum data_formats VAR_2,
      struct ima_field_data *VAR_3)
{
 switch (VAR_1) {
 case 131:
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 default:
  break;
 }
}
