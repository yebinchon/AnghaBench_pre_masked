
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* a; } ;
typedef TYPE_2__ WhereClause ;
struct TYPE_4__ {int iParent; int nChild; int truthProb; } ;



__attribute__((used)) static void FUNC_0(WhereClause *VAR_0, int VAR_1, int VAR_2){
  VAR_0->a[VAR_1].iParent = VAR_2;
  VAR_0->a[VAR_1].truthProb = VAR_0->a[VAR_2].truthProb;
  VAR_0->a[VAR_2].nChild++;
}
