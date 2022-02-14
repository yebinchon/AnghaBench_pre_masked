
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rc; } ;
struct TYPE_5__ {TYPE_2__* pIndex; } ;
typedef TYPE_1__ Fts5Iter ;
typedef int Fts5IndexIter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ,int ) ;

int FUNC_3(Fts5IndexIter *VAR_1){
  Fts5Iter *VAR_2 = (Fts5Iter*)VAR_1;
  FUNC_0( VAR_2->pIndex->rc==VAR_0 );
  FUNC_2(VAR_2->pIndex, VAR_2, 0, 0);
  return FUNC_1(VAR_2->pIndex);
}
