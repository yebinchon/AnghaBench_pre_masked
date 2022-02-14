
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct ima_field_data {int* data; int len; } ;
typedef int field_len ;
typedef enum ima_show_type { ____Placeholder_ima_show_type } ima_show_type ;
typedef enum data_formats { ____Placeholder_data_formats } data_formats ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct seq_file*,int*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_3,
       enum ima_show_type VAR_4,
       enum data_formats VAR_5,
       struct ima_field_data *VAR_6)
{
 u32 VAR_7 = (VAR_4 == VAR_1) ?
     FUNC_2(VAR_6->data) : VAR_6->len;

 if (VAR_4 != VAR_0) {
  u32 VAR_8 = !VAR_2 ? VAR_7 : FUNC_0(VAR_7);

  FUNC_1(VAR_3, &VAR_8, sizeof(VAR_8));
 }

 if (!VAR_7)
  return;

 FUNC_1(VAR_3, VAR_6->data, VAR_7);
}
