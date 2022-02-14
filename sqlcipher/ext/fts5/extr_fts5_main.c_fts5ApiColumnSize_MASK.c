
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_14__ {scalar_t__ zContent; int nCol; scalar_t__* abUnindexed; scalar_t__ bColumnsize; } ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_13__ {int* aColumnSize; TYPE_1__ base; } ;
struct TYPE_11__ {TYPE_5__* pConfig; } ;
struct TYPE_12__ {int pStorage; TYPE_2__ p; } ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;
typedef int Fts5Context ;
typedef TYPE_5__ Fts5Config ;


 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,char const**,int*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (TYPE_5__*,int ,char const*,int,void*,int ) ;

__attribute__((used)) static int FUNC_6(Fts5Context *VAR_5, int VAR_6, int *VAR_7){
  Fts5Cursor *VAR_8 = (Fts5Cursor*)VAR_5;
  Fts5FullTable *VAR_9 = (Fts5FullTable*)(VAR_8->base.pVtab);
  Fts5Config *VAR_10 = VAR_9->p.pConfig;
  int VAR_11 = VAR_2;

  if( FUNC_1(VAR_8, VAR_0) ){
    if( VAR_10->bColumnsize ){
      i64 VAR_12 = FUNC_3(VAR_8);
      VAR_11 = FUNC_4(VAR_9->pStorage, VAR_12, VAR_8->aColumnSize);
    }else if( VAR_10->zContent==0 ){
      int VAR_13;
      for(VAR_13=0; VAR_13<VAR_10->nCol; VAR_13++){
        if( VAR_10->abUnindexed[VAR_13]==0 ){
          VAR_8->aColumnSize[VAR_13] = -1;
        }
      }
    }else{
      int VAR_14;
      for(VAR_14=0; VAR_11==VAR_2 && VAR_14<VAR_10->nCol; VAR_14++){
        if( VAR_10->abUnindexed[VAR_14]==0 ){
          const char *VAR_15; int VAR_16;
          void *VAR_17 = (void*)(&VAR_8->aColumnSize[VAR_14]);
          VAR_8->aColumnSize[VAR_14] = 0;
          VAR_11 = FUNC_2(VAR_5, VAR_14, &VAR_15, &VAR_16);
          if( VAR_11==VAR_2 ){
            VAR_11 = FUNC_5(
                VAR_10, VAR_1, VAR_15, VAR_16, VAR_17, VAR_4
            );
          }
        }
      }
    }
    FUNC_0(VAR_8, VAR_0);
  }
  if( VAR_6<0 ){
    int VAR_18;
    *VAR_7 = 0;
    for(VAR_18=0; VAR_18<VAR_10->nCol; VAR_18++){
      *VAR_7 += VAR_8->aColumnSize[VAR_18];
    }
  }else if( VAR_6<VAR_10->nCol ){
    *VAR_7 = VAR_8->aColumnSize[VAR_6];
  }else{
    *VAR_7 = 0;
    VAR_11 = VAR_3;
  }
  return VAR_11;
}
