
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u32 ;
struct seq_file {int dummy; } ;
struct ima_template_field {char* field_id; int (* field_show ) (struct seq_file*,int,int *) ;} ;
struct ima_template_entry {int pcr; char* digest; int template_data_len; int * template_data; TYPE_1__* template_desc; } ;
struct ima_queue_entry {struct ima_template_entry* entry; } ;
typedef int namelen ;
typedef enum ima_show_type { ____Placeholder_ima_show_type } ima_show_type ;
struct TYPE_2__ {char* name; char* fmt; int num_fields; struct ima_template_field** fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct seq_file*,int,int *) ;

int FUNC_5(struct seq_file *VAR_6, void *VAR_7)
{

 struct ima_queue_entry *VAR_8 = VAR_7;
 struct ima_template_entry *VAR_9;
 char *VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 bool VAR_14 = 0;
 int VAR_15;


 VAR_9 = VAR_8->entry;
 if (VAR_9 == ((void*)0))
  return -1;

 VAR_10 = (VAR_9->template_desc->name[0] != '\0') ?
     VAR_9->template_desc->name : VAR_9->template_desc->fmt;






 VAR_11 = !VAR_5 ? VAR_9->pcr : FUNC_0(VAR_9->pcr);
 FUNC_1(VAR_6, &VAR_11, sizeof(VAR_9->pcr));


 FUNC_1(VAR_6, VAR_9->digest, VAR_4);


 VAR_12 = !VAR_5 ? FUNC_3(VAR_10) :
  FUNC_0(FUNC_3(VAR_10));
 FUNC_1(VAR_6, &VAR_12, sizeof(VAR_12));


 FUNC_1(VAR_6, VAR_10, FUNC_3(VAR_10));


 if (FUNC_2(VAR_10, VAR_3) == 0)
  VAR_14 = 1;

 if (!VAR_14) {
  VAR_13 = !VAR_5 ? VAR_9->template_data_len :
   FUNC_0(VAR_9->template_data_len);
  FUNC_1(VAR_6, &VAR_13, sizeof(VAR_9->template_data_len));
 }


 for (VAR_15 = 0; VAR_15 < VAR_9->template_desc->num_fields; VAR_15++) {
  enum ima_show_type VAR_16 = VAR_0;
  const struct ima_template_field *VAR_17 =
   VAR_9->template_desc->fields[VAR_15];

  if (VAR_14 && FUNC_2(VAR_17->field_id, "d") == 0)
   VAR_16 = VAR_1;
  if (VAR_14 && FUNC_2(VAR_17->field_id, "n") == 0)
   VAR_16 = VAR_2;
  VAR_17->field_show(VAR_6, VAR_16, &VAR_9->template_data[VAR_15]);
 }
 return 0;
}
