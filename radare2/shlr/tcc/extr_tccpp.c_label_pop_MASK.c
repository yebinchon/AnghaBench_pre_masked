
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sym_label; } ;
struct TYPE_6__ {scalar_t__ r; size_t v; int prev_tok; struct TYPE_6__* prev; } ;
typedef TYPE_1__ Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__** VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(Sym **VAR_4, Sym *VAR_5)
{
 Sym *VAR_6, *VAR_7;
 for (VAR_6 = *VAR_4; VAR_6 != VAR_5; VAR_6 = VAR_7) {
  VAR_7 = VAR_6->prev;
  if (VAR_6->r == VAR_0) {
   FUNC_3 ("label '%s' declared but not used", FUNC_0 (VAR_6->v, ((void*)0)));
  } else if (VAR_6->r == VAR_1) {
   FUNC_2 ("label '%s' used but not defined",
    FUNC_0 (VAR_6->v, ((void*)0)));
  }

  VAR_3[VAR_6->v - VAR_2]->sym_label = VAR_6->prev_tok;
  FUNC_1 (VAR_6);
 }
 *VAR_4 = VAR_5;
}
