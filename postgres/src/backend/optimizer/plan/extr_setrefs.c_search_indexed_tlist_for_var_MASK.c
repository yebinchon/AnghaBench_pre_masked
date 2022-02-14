
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ varno; scalar_t__ varattno; scalar_t__ resno; } ;
typedef TYPE_1__ tlist_vinfo ;
struct TYPE_10__ {int num_vars; TYPE_1__* vars; } ;
typedef TYPE_2__ indexed_tlist ;
struct TYPE_11__ {scalar_t__ varno; scalar_t__ varattno; scalar_t__ varnoold; } ;
typedef TYPE_3__ Var ;
typedef scalar_t__ Index ;
typedef scalar_t__ AttrNumber ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static Var *
FUNC_1(Var *VAR_0, indexed_tlist *VAR_1,
        Index VAR_2, int VAR_3)
{
 Index VAR_4 = VAR_0->varno;
 AttrNumber VAR_5 = VAR_0->varattno;
 tlist_vinfo *VAR_6;
 int VAR_7;

 VAR_6 = VAR_1->vars;
 VAR_7 = VAR_1->num_vars;
 while (VAR_7-- > 0)
 {
  if (VAR_6->varno == VAR_4 && VAR_6->varattno == VAR_5)
  {

   Var *VAR_8 = FUNC_0(VAR_0);

   VAR_8->varno = VAR_2;
   VAR_8->varattno = VAR_6->resno;
   if (VAR_8->varnoold > 0)
    VAR_8->varnoold += VAR_3;
   return VAR_8;
  }
  VAR_6++;
 }
 return ((void*)0);
}
