
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
struct TYPE_12__ {scalar_t__ pVtab; } ;
struct TYPE_15__ {int nInstAlloc; int* aInst; int nInstCount; TYPE_4__* aInstIter; int pExpr; TYPE_2__ base; } ;
struct TYPE_14__ {scalar_t__ bEof; scalar_t__ iPos; } ;
struct TYPE_13__ {TYPE_1__* pConfig; } ;
struct TYPE_11__ {int nCol; } ;
typedef TYPE_3__ Fts5Table ;
typedef TYPE_4__ Fts5PoslistReader ;
typedef TYPE_5__ Fts5Cursor ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int,int const**,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int*,int) ;
 int FUNC_6 (int const*,int,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (int*,int) ;

__attribute__((used)) static int FUNC_9(Fts5Cursor *VAR_4){
  int VAR_5 = VAR_3;
  Fts5PoslistReader *VAR_6;
  int VAR_7;
  int VAR_8 = ((Fts5Table*)VAR_4->base.pVtab)->pConfig->nCol;

  VAR_7 = FUNC_4(VAR_4->pExpr);
  if( VAR_4->aInstIter==0 ){
    sqlite3_int64 VAR_9 = sizeof(Fts5PoslistReader) * VAR_7;
    VAR_4->aInstIter = (Fts5PoslistReader*)FUNC_5(&VAR_5, VAR_9);
  }
  VAR_6 = VAR_4->aInstIter;

  if( VAR_6 ){
    int VAR_10 = 0;
    int VAR_11;


    for(VAR_11=0; VAR_11<VAR_7 && VAR_5==VAR_3; VAR_11++){
      const u8 *VAR_12;
      int VAR_13;
      VAR_5 = FUNC_3(VAR_4, VAR_11, &VAR_12, &VAR_13);
      if( VAR_5==VAR_3 ){
        FUNC_6(VAR_12, VAR_13, &VAR_6[VAR_11]);
      }
    }

    if( VAR_5==VAR_3 ){
      while( 1 ){
        int *VAR_14;
        int VAR_15 = -1;
        for(VAR_11=0; VAR_11<VAR_7; VAR_11++){
          if( (VAR_6[VAR_11].bEof==0)
              && (VAR_15<0 || VAR_6[VAR_11].iPos<VAR_6[VAR_15].iPos)
            ){
            VAR_15 = VAR_11;
          }
        }
        if( VAR_15<0 ) break;

        VAR_10++;
        if( VAR_10>=VAR_4->nInstAlloc ){
          VAR_4->nInstAlloc = VAR_4->nInstAlloc ? VAR_4->nInstAlloc*2 : 32;
          VAR_14 = (int*)FUNC_8(
              VAR_4->aInst, VAR_4->nInstAlloc*sizeof(int)*3
              );
          if( VAR_14 ){
            VAR_4->aInst = VAR_14;
          }else{
            VAR_5 = VAR_2;
            break;
          }
        }

        VAR_14 = &VAR_4->aInst[3 * (VAR_10-1)];
        VAR_14[0] = VAR_15;
        VAR_14[1] = FUNC_1(VAR_6[VAR_15].iPos);
        VAR_14[2] = FUNC_2(VAR_6[VAR_15].iPos);
        if( VAR_14[1]<0 || VAR_14[1]>=VAR_8 ){
          VAR_5 = VAR_1;
          break;
        }
        FUNC_7(&VAR_6[VAR_15]);
      }
    }

    VAR_4->nInstCount = VAR_10;
    FUNC_0(VAR_4, VAR_0);
  }
  return VAR_5;
}
