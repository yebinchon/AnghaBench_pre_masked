
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int mutex; } ;
struct TYPE_12__ {int nCell; unsigned char* aData; int pDbPage; int intKey; int leaf; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char*) ;
 unsigned char* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_5 (unsigned char*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,TYPE_1__**,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_11(
  BtShared *VAR_2,
  Pgno VAR_3,
  int VAR_4,
  int *VAR_5
){
  MemPage *VAR_6;
  int VAR_7;
  unsigned char *VAR_8;
  int VAR_9;

  FUNC_0( FUNC_9(VAR_2->mutex) );
  if( VAR_3>FUNC_1(VAR_2) ){
    return VAR_1;
  }

  VAR_7 = FUNC_6(VAR_2, VAR_3, &VAR_6, 0);
  if( VAR_7 ) return VAR_7;
  for(VAR_9=0; VAR_9<VAR_6->nCell; VAR_9++){
    VAR_8 = FUNC_3(VAR_6, VAR_9);
    if( !VAR_6->leaf ){
      VAR_7 = FUNC_11(VAR_2, FUNC_5(VAR_8), 1, VAR_5);
      if( VAR_7 ) goto cleardatabasepage_out;
    }
    VAR_7 = FUNC_2(VAR_6, VAR_8);
    if( VAR_7 ) goto cleardatabasepage_out;
  }
  if( !VAR_6->leaf ){
    VAR_7 = FUNC_11(VAR_2, FUNC_5(&VAR_6->aData[8]), 1, VAR_5);
    if( VAR_7 ) goto cleardatabasepage_out;
  }else if( VAR_5 ){
    FUNC_0( VAR_6->intKey );
    *VAR_5 += VAR_6->nCell;
  }
  if( VAR_4 ){
    FUNC_4(VAR_6, &VAR_7);
  }else if( (VAR_7 = FUNC_8(VAR_6->pDbPage))==0 ){
    FUNC_10(VAR_6, VAR_6->aData[0] | VAR_0);
  }

cleardatabasepage_out:
  FUNC_7(VAR_6);
  return VAR_7;
}
