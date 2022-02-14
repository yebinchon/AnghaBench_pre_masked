
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {scalar_t__ nLocal; scalar_t__ nPayload; int nSize; } ;
struct TYPE_10__ {scalar_t__* aData; int nCell; int hdrOffset; TYPE_1__* pBt; int (* xParseCell ) (TYPE_2__*,scalar_t__*,TYPE_3__*) ;int pDbPage; } ;
struct TYPE_9__ {int usableSize; int mutex; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__* FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(MemPage *VAR_5, Pgno VAR_6, Pgno VAR_7, u8 VAR_8){
  FUNC_0( FUNC_6(VAR_5->pBt->mutex) );
  FUNC_0( FUNC_5(VAR_5->pDbPage) );
  if( VAR_8==VAR_2 ){

    if( FUNC_3(VAR_5->aData)!=VAR_6 ){
      return VAR_3;
    }
    FUNC_4(VAR_5->aData, VAR_7);
  }else{
    int VAR_9;
    int VAR_10;
    int VAR_11;

    VAR_11 = FUNC_1(VAR_5);
    if( VAR_11 ) return VAR_11;
    VAR_10 = VAR_5->nCell;

    for(VAR_9=0; VAR_9<VAR_10; VAR_9++){
      u8 *VAR_12 = FUNC_2(VAR_5, VAR_9);
      if( VAR_8==VAR_1 ){
        CellInfo VAR_13;
        VAR_5->xParseCell(VAR_5, VAR_12, &VAR_13);
        if( VAR_13.nLocal<VAR_13.nPayload ){
          if( VAR_12+VAR_13.nSize > VAR_5->aData+VAR_5->pBt->usableSize ){
            return VAR_3;
          }
          if( VAR_6==FUNC_3(VAR_12+VAR_13.nSize-4) ){
            FUNC_4(VAR_12+VAR_13.nSize-4, VAR_7);
            break;
          }
        }
      }else{
        if( FUNC_3(VAR_12)==VAR_6 ){
          FUNC_4(VAR_12, VAR_7);
          break;
        }
      }
    }

    if( VAR_9==VAR_10 ){
      if( VAR_8!=VAR_0 ||
          FUNC_3(&VAR_5->aData[VAR_5->hdrOffset+8])!=VAR_6 ){
        return VAR_3;
      }
      FUNC_4(&VAR_5->aData[VAR_5->hdrOffset+8], VAR_7);
    }
  }
  return VAR_4;
}
