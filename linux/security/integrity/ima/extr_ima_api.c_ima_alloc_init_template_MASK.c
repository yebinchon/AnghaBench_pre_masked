
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ima_template_field {int (* field_init ) (struct ima_event_data*,TYPE_1__*) ;} ;
struct ima_template_entry {int template_data_len; TYPE_1__* template_data; struct ima_template_desc* template_desc; } ;
struct ima_template_desc {int num_fields; struct ima_template_field** fields; } ;
struct ima_event_data {int dummy; } ;
typedef int len ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ima_template_entry*) ;
 struct ima_template_desc* FUNC_1 () ;
 struct ima_template_entry* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ima_template_entry*,int ,int) ;
 int FUNC_4 (struct ima_event_data*,TYPE_1__*) ;
 int VAR_2 ;

int FUNC_5(struct ima_event_data *VAR_3,
       struct ima_template_entry **VAR_4,
       struct ima_template_desc *VAR_5)
{
 struct ima_template_desc *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (VAR_5)
  VAR_6 = VAR_5;
 else
  VAR_6 = FUNC_1();

 *VAR_4 = FUNC_2(FUNC_3(*VAR_4, VAR_2,
         VAR_6->num_fields), VAR_1);
 if (!*VAR_4)
  return -VAR_0;

 (*VAR_4)->template_desc = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_6->num_fields; VAR_7++) {
  const struct ima_template_field *VAR_9 =
   VAR_6->fields[VAR_7];
  u32 VAR_10;

  VAR_8 = VAR_9->field_init(VAR_3,
        &((*VAR_4)->template_data[VAR_7]));
  if (VAR_8 != 0)
   goto out;

  VAR_10 = (*VAR_4)->template_data[VAR_7].len;
  (*VAR_4)->template_data_len += sizeof(VAR_10);
  (*VAR_4)->template_data_len += VAR_10;
 }
 return 0;
out:
 FUNC_0(*VAR_4);
 *VAR_4 = ((void*)0);
 return VAR_8;
}
