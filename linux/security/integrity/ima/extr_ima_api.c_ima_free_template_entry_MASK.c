
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ima_template_entry {TYPE_2__* template_data; TYPE_1__* template_desc; } ;
struct TYPE_4__ {struct ima_template_entry* data; } ;
struct TYPE_3__ {int num_fields; } ;


 int FUNC_0 (struct ima_template_entry*) ;

void FUNC_1(struct ima_template_entry *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->template_desc->num_fields; VAR_1++)
  FUNC_0(VAR_0->template_data[VAR_1].data);

 FUNC_0(VAR_0);
}
