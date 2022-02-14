
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t n; int * p; } ;
struct TYPE_7__ {int * aEof; int * aPoslist; } ;
typedef TYPE_1__ Fts5DoclistIter ;
typedef TYPE_2__ Fts5Buffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(
  Fts5Buffer *VAR_0,
  Fts5DoclistIter *VAR_1
){
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  VAR_1->aPoslist = VAR_0->p;
  VAR_1->aEof = &VAR_0->p[VAR_0->n];
  FUNC_0(VAR_1);
}
