
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_field {int type; } ;
struct synth_event {unsigned int n_fields; struct synth_field** fields; } ;
struct hist_field {int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct synth_event *VAR_1,
        struct hist_field *VAR_2,
        unsigned int VAR_3)
{
 struct synth_field *VAR_4;

 if (VAR_3 >= VAR_1->n_fields)
  return -VAR_0;

 VAR_4 = VAR_1->fields[VAR_3];

 if (FUNC_0(VAR_4->type, VAR_2->type) != 0)
  return -VAR_0;

 return 0;
}
