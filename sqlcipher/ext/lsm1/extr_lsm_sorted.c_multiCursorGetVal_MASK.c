
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int TreeCursor ;
struct TYPE_13__ {int iFree; int nPtr; TYPE_5__* aPtr; scalar_t__ pSystemVal; TYPE_1__* pDb; int ** apTreeCsr; } ;
struct TYPE_12__ {int nVal; void* pVal; int pPg; } ;
struct TYPE_10__ {int nEntry; TYPE_2__* aEntry; } ;
struct TYPE_11__ {TYPE_3__ freelist; } ;
struct TYPE_9__ {int iId; } ;
struct TYPE_8__ {TYPE_4__* pWorker; } ;
typedef TYPE_4__ Snapshot ;
typedef TYPE_5__ SegmentPtr ;
typedef TYPE_6__ MultiCursor ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void**,int*) ;

__attribute__((used)) static int FUNC_4(
  MultiCursor *VAR_2,
  int VAR_3,
  void **VAR_4,
  int *VAR_5
){
  int VAR_6 = VAR_1;

  *VAR_4 = 0;
  *VAR_5 = 0;

  switch( VAR_3 ){
    case 129:
    case 128: {
      TreeCursor *VAR_7 = VAR_2->apTreeCsr[VAR_3-129];
      if( FUNC_2(VAR_7) ){
        FUNC_3(VAR_7, VAR_4, VAR_5);
      }else{
        *VAR_4 = 0;
        *VAR_5 = 0;
      }
      break;
    }

    case 130: {
      Snapshot *VAR_8 = VAR_2->pDb->pWorker;
      if( VAR_8
       && (VAR_2->iFree % 2)==0
       && VAR_2->iFree < (VAR_8->freelist.nEntry*2)
      ){
        int VAR_9 = VAR_8->freelist.nEntry - 1 - (VAR_2->iFree / 2);
        u8 *VAR_10 = &((u8 *)(VAR_2->pSystemVal))[4];
        FUNC_1(VAR_10, VAR_8->freelist.aEntry[VAR_9].iId);
        *VAR_4 = VAR_10;
        *VAR_5 = 8;
      }
      break;
    }

    default: {
      int VAR_11 = VAR_3-VAR_0;
      if( VAR_11<VAR_2->nPtr ){
        SegmentPtr *VAR_12 = &VAR_2->aPtr[VAR_11];
        if( VAR_12->pPg ){
          *VAR_4 = VAR_12->pVal;
          *VAR_5 = VAR_12->nVal;
        }
      }
    }
  }

  FUNC_0( VAR_6==VAR_1 || (*VAR_4==0 && *VAR_5==0) );
  return VAR_6;
}
