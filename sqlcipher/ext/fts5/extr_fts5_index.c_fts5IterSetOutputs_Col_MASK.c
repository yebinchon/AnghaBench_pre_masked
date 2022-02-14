
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int n; int p; } ;
struct TYPE_9__ {int nData; int pData; int iRowid; } ;
struct TYPE_11__ {TYPE_5__ poslist; TYPE_1__ base; int pColset; int pIndex; } ;
struct TYPE_10__ {int iRowid; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Iter ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,TYPE_2__*,int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_2(Fts5Iter *VAR_0, Fts5SegIter *VAR_1){
  FUNC_0(&VAR_0->poslist);
  FUNC_1(VAR_0->pIndex, VAR_1, VAR_0->pColset, &VAR_0->poslist);
  VAR_0->base.iRowid = VAR_1->iRowid;
  VAR_0->base.pData = VAR_0->poslist.p;
  VAR_0->base.nData = VAR_0->poslist.n;
}
