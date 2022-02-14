
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nData; int iRowid; } ;
struct TYPE_12__ {TYPE_3__ base; TYPE_2__* pIndex; } ;
struct TYPE_11__ {int nPos; int iRowid; } ;
struct TYPE_9__ {TYPE_1__* pConfig; } ;
struct TYPE_8__ {scalar_t__ eDetail; } ;
typedef TYPE_4__ Fts5SegIter ;
typedef TYPE_5__ Fts5Iter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(Fts5Iter *VAR_1, Fts5SegIter *VAR_2){
  FUNC_0( VAR_1->pIndex->pConfig->eDetail==VAR_0 );
  VAR_1->base.iRowid = VAR_2->iRowid;
  VAR_1->base.nData = VAR_2->nPos;
}
