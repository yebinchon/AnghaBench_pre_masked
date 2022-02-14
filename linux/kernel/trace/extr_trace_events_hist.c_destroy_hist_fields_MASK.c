
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_trigger_data {unsigned int n_var_refs; TYPE_1__** var_refs; int ** fields; } ;
struct TYPE_2__ {int flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct hist_trigger_data *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->fields[VAR_3]) {
   FUNC_2(VAR_2->fields[VAR_3], 0);
   VAR_2->fields[VAR_3] = ((void*)0);
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->n_var_refs; VAR_3++) {
  FUNC_0(!(VAR_2->var_refs[VAR_3]->flags & VAR_1));
  FUNC_1(VAR_2->var_refs[VAR_3]);
  VAR_2->var_refs[VAR_3] = ((void*)0);
 }
}
