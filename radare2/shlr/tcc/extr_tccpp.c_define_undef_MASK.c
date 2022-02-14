
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * sym_define; } ;
struct TYPE_4__ {int v; } ;
typedef TYPE_1__ Sym ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int VAR_2 ;

void FUNC_0(Sym *VAR_3)
{
 int VAR_4;
 VAR_4 = VAR_3->v;
 if (VAR_4 >= VAR_0 && VAR_4 < VAR_2) {
  VAR_1[VAR_4 - VAR_0]->sym_define = ((void*)0);
 }
 VAR_3->v = 0;
}
