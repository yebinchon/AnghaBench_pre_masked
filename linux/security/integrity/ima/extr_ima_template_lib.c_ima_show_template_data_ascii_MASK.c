
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct ima_field_data {int len; int * data; } ;
typedef enum ima_show_type { ____Placeholder_ima_show_type } ima_show_type ;
typedef enum data_formats { ____Placeholder_data_formats } data_formats ;






 int FUNC_0 (struct seq_file*,int *,int) ;
 int FUNC_1 (struct seq_file*,char*,int *) ;
 int * FUNC_2 (int *,int,char) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0,
      enum ima_show_type VAR_1,
      enum data_formats VAR_2,
      struct ima_field_data *VAR_3)
{
 u8 *VAR_4 = VAR_3->data;
 u32 VAR_5 = VAR_3->len;

 switch (VAR_2) {
 case 130:
  VAR_4 = FUNC_2(VAR_3->data, VAR_5, ':');
  if (VAR_4 != VAR_3->data)
   FUNC_1(VAR_0, "%s", VAR_3->data);


  VAR_4 += 2;
  VAR_5 -= VAR_4 - VAR_3->data;

 case 131:
 case 129:
  if (!VAR_5)
   break;
  FUNC_0(VAR_0, VAR_4, VAR_5);
  break;
 case 128:
  FUNC_1(VAR_0, "%s", VAR_4);
  break;
 default:
  break;
 }
}
