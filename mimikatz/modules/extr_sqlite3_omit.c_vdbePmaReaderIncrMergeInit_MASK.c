
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_16__ {int mxSz; int iStartOff; scalar_t__ bUseThread; TYPE_2__* aFile; int pMerger; TYPE_4__* pTask; } ;
struct TYPE_15__ {TYPE_6__* pIncr; } ;
struct TYPE_13__ {scalar_t__ pFd; int iEof; } ;
struct TYPE_14__ {TYPE_3__ file2; TYPE_1__* pSorter; } ;
struct TYPE_12__ {scalar_t__ pFd; } ;
struct TYPE_11__ {int * db; } ;
typedef TYPE_4__ SortSubtask ;
typedef TYPE_5__ PmaReader ;
typedef TYPE_6__ IncrMerger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(PmaReader *VAR_5, int VAR_6){
  int VAR_7 = VAR_4;
  IncrMerger *VAR_8 = VAR_5->pIncr;
  SortSubtask *VAR_9 = VAR_8->pTask;
  sqlite3 *VAR_10 = VAR_9->pSorter->db;


  FUNC_0( VAR_3>0 || VAR_6==VAR_0 );

  VAR_7 = FUNC_2(VAR_9, VAR_8->pMerger, VAR_6);




  if( VAR_7==VAR_4 ){
    int VAR_11 = VAR_8->mxSz;
                                {
      if( VAR_9->file2.pFd==0 ){
        FUNC_0( VAR_9->file2.iEof>0 );
        VAR_7 = FUNC_4(VAR_10, VAR_9->file2.iEof, &VAR_9->file2.pFd);
        VAR_9->file2.iEof = 0;
      }
      if( VAR_7==VAR_4 ){
        VAR_8->aFile[1].pFd = VAR_9->file2.pFd;
        VAR_8->iStartOff = VAR_9->file2.iEof;
        VAR_9->file2.iEof += VAR_11;
      }
    }
  }
  if( VAR_7==VAR_4 && (VAR_3==0 || VAR_6!=VAR_2) ){
    VAR_7 = FUNC_3(VAR_5);
  }

  return VAR_7;
}
