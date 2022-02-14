
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_trigger_data {int dummy; } ;
struct TYPE_2__ {unsigned int idx; struct hist_trigger_data* hist_data; } ;
struct hist_field {int flags; TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static struct hist_field *
FUNC_1(struct hist_field *VAR_1,
   struct hist_trigger_data *VAR_2,
   unsigned int VAR_3)
{
 FUNC_0(!(VAR_1 && VAR_1->flags & VAR_0));

 if (VAR_1 && VAR_1->var.idx == VAR_3 &&
     VAR_1->var.hist_data == VAR_2)
  return VAR_1;

 return ((void*)0);
}
