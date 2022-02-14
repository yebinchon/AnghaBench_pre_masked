
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int str; } ;
struct parse_events_term {TYPE_1__ val; int err_val; int err_term; int config; int type_term; int type_val; } ;


 int FUNC_0 (struct parse_events_term**,struct parse_events_term*,int ,int ) ;

int FUNC_1(struct parse_events_term **VAR_0,
        struct parse_events_term *VAR_1)
{
 struct parse_events_term VAR_2 = {
  .type_val = VAR_1->type_val,
  .type_term = VAR_1->type_term,
  .config = VAR_1->config,
  .err_term = VAR_1->err_term,
  .err_val = VAR_1->err_val,
 };

 return FUNC_0(VAR_0, &VAR_2, VAR_1->val.str, VAR_1->val.num);
}
