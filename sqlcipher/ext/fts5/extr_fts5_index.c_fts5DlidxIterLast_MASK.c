
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int nLvl; int iSegid; TYPE_2__* aLvl; } ;
struct TYPE_10__ {int iLeafPgno; int pData; scalar_t__ bEof; } ;
struct TYPE_9__ {scalar_t__ rc; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5DlidxLvl ;
typedef TYPE_3__ Fts5DlidxIter ;


 int FUNC_0 (int ,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_5(Fts5Index *VAR_1, Fts5DlidxIter *VAR_2){
  int VAR_3;


  for(VAR_3=VAR_2->nLvl-1; VAR_1->rc==VAR_0 && VAR_3>=0; VAR_3--){
    Fts5DlidxLvl *VAR_4 = &VAR_2->aLvl[VAR_3];
    while( FUNC_3(VAR_4)==0 );
    VAR_4->bEof = 0;

    if( VAR_3>0 ){
      Fts5DlidxLvl *VAR_5 = &VAR_4[-1];
      FUNC_2(VAR_5->pData);
      FUNC_4(VAR_5, 0, sizeof(Fts5DlidxLvl));
      VAR_5->pData = FUNC_1(VAR_1,
          FUNC_0(VAR_2->iSegid, VAR_3-1, VAR_4->iLeafPgno)
      );
    }
  }
}
