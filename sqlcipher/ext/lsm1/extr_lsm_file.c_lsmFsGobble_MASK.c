
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * pWorker; int * pFS; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_10__ {scalar_t__ nSize; scalar_t__ iFirst; } ;
typedef int Snapshot ;
typedef TYPE_2__ Segment ;
typedef scalar_t__ LsmPgno ;
typedef int FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__*,int) ;
 int FUNC_2 (int *,TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*) ;

void FUNC_9(
  lsm_db *VAR_1,
  Segment *VAR_2,
  LsmPgno *VAR_3,
  int VAR_4
){
  int VAR_5 = VAR_0;
  FileSystem *VAR_6 = VAR_1->pFS;
  Snapshot *VAR_7 = VAR_1->pWorker;
  int VAR_8;

  FUNC_0( VAR_2->nSize>0 );
  FUNC_0( 0==FUNC_8(VAR_6, VAR_2) );
  FUNC_0( VAR_4>0 && 0==FUNC_6(VAR_6, VAR_2, VAR_3[0]) );

  VAR_8 = FUNC_7(VAR_6, VAR_2->iFirst);
  VAR_2->nSize += (int)(VAR_2->iFirst - FUNC_3(VAR_6, VAR_8));

  while( VAR_5==VAR_0 ){
    int VAR_9 = 0;
    LsmPgno VAR_10 = FUNC_1(VAR_6, VAR_8, VAR_3, VAR_4);
    if( VAR_10 ){
      VAR_2->iFirst = VAR_10;
      break;
    }
    VAR_5 = FUNC_2(VAR_6, VAR_2, VAR_8, &VAR_9);
    if( VAR_5==VAR_0 ) VAR_5 = FUNC_4(VAR_6, VAR_7, VAR_2, VAR_8);
    VAR_2->nSize -= (int)(
        1 + FUNC_5(VAR_6, VAR_8) - FUNC_3(VAR_6, VAR_8)
    );
    VAR_8 = VAR_9;
  }

  VAR_2->nSize -= (int)(VAR_2->iFirst - FUNC_3(VAR_6, VAR_8));
  FUNC_0( VAR_2->nSize>0 );
}
