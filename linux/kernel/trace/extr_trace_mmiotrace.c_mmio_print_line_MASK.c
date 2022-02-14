
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {TYPE_1__* ent; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int type; } ;





 int VAR_0 ;
 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;
 int FUNC_2 (struct trace_iterator*) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_1)
{
 switch (VAR_1->ent->type) {
 case 129:
  return FUNC_2(VAR_1);
 case 130:
  return FUNC_0(VAR_1);
 case 128:
  return FUNC_1(VAR_1);
 default:
  return VAR_0;
 }
}
