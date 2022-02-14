
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int argidx; char* text; } ;
struct TYPE_6__ {int * prev; int next; int type; TYPE_1__ subst; } ;
typedef TYPE_2__ mtext_t ;
typedef int def_exp_t ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static mtext_t *FUNC_1(char *VAR_0, int VAR_1, def_exp_t VAR_2)
{
 mtext_t *VAR_3 = FUNC_0(sizeof(mtext_t));
 if(!VAR_3)
  return ((void*)0);
 if(VAR_0 == ((void*)0))
  VAR_3->subst.argidx = VAR_1;
 else
  VAR_3->subst.text = VAR_0;
 VAR_3->type = VAR_2;
 VAR_3->next = *(VAR_3->prev = ((void*)0));
 return VAR_3;
}
