
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct ima_template_entry {char* pcr; TYPE_3__* template_data; TYPE_2__* template_desc; int digest; } ;
struct ima_queue_entry {struct ima_template_entry* entry; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {char* name; char* fmt; int num_fields; TYPE_1__** fields; } ;
struct TYPE_4__ {int (* field_show ) (struct seq_file*,int ,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct seq_file*,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{

 struct ima_queue_entry *VAR_4 = VAR_3;
 struct ima_template_entry *VAR_5;
 char *VAR_6;
 int VAR_7;


 VAR_5 = VAR_4->entry;
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_6 = (VAR_5->template_desc->name[0] != '\0') ?
     VAR_5->template_desc->name : VAR_5->template_desc->fmt;


 FUNC_1(VAR_2, "%2d ", VAR_5->pcr);


 FUNC_0(VAR_2, VAR_5->digest, VAR_1);


 FUNC_1(VAR_2, " %s", VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_5->template_desc->num_fields; VAR_7++) {
  FUNC_2(VAR_2, " ");
  if (VAR_5->template_data[VAR_7].len == 0)
   continue;

  VAR_5->template_desc->fields[VAR_7]->field_show(VAR_2, VAR_0,
       &VAR_5->template_data[VAR_7]);
 }
 FUNC_2(VAR_2, "\n");
 return 0;
}
