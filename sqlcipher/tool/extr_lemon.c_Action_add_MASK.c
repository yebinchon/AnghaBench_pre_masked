
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct state {int dummy; } ;
struct rule {int dummy; } ;
struct TYPE_2__ {struct rule* rp; struct state* stp; } ;
struct action {int type; TYPE_1__ x; scalar_t__ spOpt; struct symbol* sp; struct action* next; } ;
typedef enum e_action { ____Placeholder_e_action } e_action ;


 struct action* FUNC_0 () ;
 int VAR_0 ;

void FUNC_1(
  struct action **VAR_1,
  enum e_action VAR_2,
  struct symbol *VAR_3,
  char *VAR_4
){
  struct action *VAR_5;
  VAR_5 = FUNC_0();
  VAR_5->next = *VAR_1;
  *VAR_1 = VAR_5;
  VAR_5->type = VAR_2;
  VAR_5->sp = VAR_3;
  VAR_5->spOpt = 0;
  if( VAR_2==VAR_0 ){
    VAR_5->x.stp = (struct state *)VAR_4;
  }else{
    VAR_5->x.rp = (struct rule *)VAR_4;
  }
}
