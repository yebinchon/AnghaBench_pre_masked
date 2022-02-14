
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int mutex; } ;
struct TYPE_12__ {int bBusy; int hdrOffset; int nCell; unsigned char* aData; int pDbPage; scalar_t__ intKey; int leaf; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ MemPage ;
typedef int CellInfo ;
typedef TYPE_2__ BtShared ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int *) ;
 unsigned char* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_5 (unsigned char*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,TYPE_1__**,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_12(
  BtShared *VAR_3,
  Pgno VAR_4,
  int VAR_5,
  int *VAR_6
){
  MemPage *VAR_7;
  int VAR_8;
  unsigned char *VAR_9;
  int VAR_10;
  int VAR_11;
  CellInfo VAR_12;

  FUNC_0( FUNC_9(VAR_3->mutex) );
  if( VAR_4>FUNC_1(VAR_3) ){
    return VAR_2;
  }
  VAR_8 = FUNC_6(VAR_3, VAR_4, &VAR_7, 0, 0);
  if( VAR_8 ) return VAR_8;
  if( VAR_7->bBusy ){
    VAR_8 = VAR_2;
    goto cleardatabasepage_out;
  }
  VAR_7->bBusy = 1;
  VAR_11 = VAR_7->hdrOffset;
  for(VAR_10=0; VAR_10<VAR_7->nCell; VAR_10++){
    VAR_9 = FUNC_3(VAR_7, VAR_10);
    if( !VAR_7->leaf ){
      VAR_8 = FUNC_12(VAR_3, FUNC_5(VAR_9), 1, VAR_6);
      if( VAR_8 ) goto cleardatabasepage_out;
    }
    VAR_8 = FUNC_2(VAR_7, VAR_9, &VAR_12);
    if( VAR_8 ) goto cleardatabasepage_out;
  }
  if( !VAR_7->leaf ){
    VAR_8 = FUNC_12(VAR_3, FUNC_5(&VAR_7->aData[VAR_11+8]), 1, VAR_6);
    if( VAR_8 ) goto cleardatabasepage_out;
  }else if( VAR_6 ){
    FUNC_0( VAR_7->intKey || VAR_0 );
    FUNC_10( !VAR_7->intKey );
    *VAR_6 += VAR_7->nCell;
  }
  if( VAR_5 ){
    FUNC_4(VAR_7, &VAR_8);
  }else if( (VAR_8 = FUNC_8(VAR_7->pDbPage))==0 ){
    FUNC_11(VAR_7, VAR_7->aData[VAR_11] | VAR_1);
  }

cleardatabasepage_out:
  VAR_7->bBusy = 0;
  FUNC_7(VAR_7);
  return VAR_8;
}
