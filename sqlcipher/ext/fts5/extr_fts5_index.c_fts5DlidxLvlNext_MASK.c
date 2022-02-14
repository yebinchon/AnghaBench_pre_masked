
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ i64 ;
struct TYPE_5__ {int nn; scalar_t__* p; } ;
struct TYPE_4__ {int iOff; int bEof; size_t iFirstOff; scalar_t__ iRowid; int iLeafPgno; TYPE_2__* pData; } ;
typedef TYPE_1__ Fts5DlidxLvl ;
typedef TYPE_2__ Fts5Data ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_3(Fts5DlidxLvl *VAR_0){
  Fts5Data *VAR_1 = VAR_0->pData;

  if( VAR_0->iOff==0 ){
    FUNC_0( VAR_0->bEof==0 );
    VAR_0->iOff = 1;
    VAR_0->iOff += FUNC_2(&VAR_1->p[1], VAR_0->iLeafPgno);
    VAR_0->iOff += FUNC_1(&VAR_1->p[VAR_0->iOff], (u64*)&VAR_0->iRowid);
    VAR_0->iFirstOff = VAR_0->iOff;
  }else{
    int VAR_2;
    for(VAR_2=VAR_0->iOff; VAR_2<VAR_1->nn; VAR_2++){
      if( VAR_1->p[VAR_2] ) break;
    }

    if( VAR_2<VAR_1->nn ){
      i64 VAR_3;
      VAR_0->iLeafPgno += (VAR_2 - VAR_0->iOff) + 1;
      VAR_2 += FUNC_1(&VAR_1->p[VAR_2], (u64*)&VAR_3);
      VAR_0->iRowid += VAR_3;
      VAR_0->iOff = VAR_2;
    }else{
      VAR_0->bEof = 1;
    }
  }

  return VAR_0->bEof;
}
