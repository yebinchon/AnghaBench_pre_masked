
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nLvl; TYPE_1__* aLvl; int iSegid; } ;
struct TYPE_6__ {scalar_t__ bEof; scalar_t__ pData; int iLeafPgno; } ;
typedef int Fts5Index ;
typedef TYPE_1__ Fts5DlidxLvl ;
typedef TYPE_2__ Fts5DlidxIter ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(Fts5Index *VAR_0, Fts5DlidxIter *VAR_1, int VAR_2){
  Fts5DlidxLvl *VAR_3 = &VAR_1->aLvl[VAR_2];

  FUNC_1( VAR_2<VAR_1->nLvl );
  if( FUNC_4(VAR_3) ){
    if( (VAR_2+1) < VAR_1->nLvl ){
      FUNC_6(VAR_0, VAR_1, VAR_2+1);
      if( VAR_3[1].bEof==0 ){
        FUNC_3(VAR_3->pData);
        FUNC_5(VAR_3, 0, sizeof(Fts5DlidxLvl));
        VAR_3->pData = FUNC_2(VAR_0,
            FUNC_0(VAR_1->iSegid, VAR_2, VAR_3[1].iLeafPgno)
        );
        if( VAR_3->pData ) FUNC_4(VAR_3);
      }
    }
  }

  return VAR_1->aLvl[0].bEof;
}
