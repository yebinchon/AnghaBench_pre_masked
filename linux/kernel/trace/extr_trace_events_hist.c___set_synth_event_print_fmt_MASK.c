
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synth_event {int n_fields; TYPE_1__** fields; } ;
struct TYPE_2__ {char* name; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char*,...) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct synth_event *VAR_1,
           char *VAR_2, int VAR_3)
{
 const char *VAR_4;
 int VAR_5 = 0;
 int VAR_6;




 VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0), "\"");
 for (VAR_6 = 0; VAR_6 < VAR_1->n_fields; VAR_6++) {
  VAR_4 = FUNC_1(VAR_1->fields[VAR_6]->type);
  VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0), "%s=%s%s",
    VAR_1->fields[VAR_6]->name, VAR_4,
    VAR_6 == VAR_1->n_fields - 1 ? "" : ", ");
 }
 VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0), "\"");

 for (VAR_6 = 0; VAR_6 < VAR_1->n_fields; VAR_6++) {
  VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0),
    ", REC->%s", VAR_1->fields[VAR_6]->name);
 }




 return VAR_5;
}
