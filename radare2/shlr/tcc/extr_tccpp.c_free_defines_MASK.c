
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * sym_define; } ;
struct TYPE_6__ {int v; scalar_t__ d; struct TYPE_6__* prev; } ;
typedef TYPE_1__ Sym ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__** VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(Sym *VAR_4)
{
 Sym *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = VAR_1;
 while (VAR_5 != VAR_4) {
  VAR_6 = VAR_5->prev;

  if (VAR_5->d) {
   FUNC_1 (VAR_5->d);
  }
  VAR_7 = VAR_5->v;
  if (VAR_7 >= VAR_0 && VAR_7 < VAR_3) {
   VAR_2[VAR_7 - VAR_0]->sym_define = ((void*)0);
  }
  FUNC_0 (VAR_5);
  VAR_5 = VAR_6;
 }
 VAR_1 = VAR_4;
}
