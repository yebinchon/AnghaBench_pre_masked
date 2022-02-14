
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int r1; int r2; TYPE_2__* pKeyInfo; TYPE_1__* aMem; } ;
typedef TYPE_3__ UnpackedRecord ;
struct TYPE_6__ {int nAllField; scalar_t__* aColl; scalar_t__* aSortOrder; } ;
struct TYPE_5__ {int flags; } ;
typedef int RecordCompare ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;

RecordCompare FUNC_2(UnpackedRecord *VAR_8){
  if( VAR_8->pKeyInfo->nAllField<=13 ){
    int VAR_9 = VAR_8->aMem[0].flags;
    if( VAR_8->pKeyInfo->aSortOrder[0] ){
      VAR_8->r1 = 1;
      VAR_8->r2 = -1;
    }else{
      VAR_8->r1 = -1;
      VAR_8->r2 = 1;
    }
    if( (VAR_9 & VAR_1) ){
      return VAR_6;
    }
    FUNC_1( VAR_9 & VAR_3 );
    FUNC_1( VAR_9 & VAR_2 );
    FUNC_1( VAR_9 & VAR_0 );
    if( (VAR_9 & (VAR_3|VAR_2|VAR_0))==0 && VAR_8->pKeyInfo->aColl[0]==0 ){
      FUNC_0( VAR_9 & VAR_4 );
      return VAR_7;
    }
  }

  return VAR_5;
}
