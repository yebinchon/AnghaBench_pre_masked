
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pEnv; int * pFS; int * pWorker; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_9__ {char* z; } ;
typedef int Snapshot ;
typedef int Segment ;
typedef int Page ;
typedef TYPE_2__ LsmString ;
typedef int LsmPgno ;
typedef int FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *,int ,int **) ;
 int FUNC_5 (int *,int *,int,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;

int FUNC_10(lsm_db *VAR_3, LsmPgno VAR_4, char **VAR_5){
  int VAR_6 = VAR_2;
  Snapshot *VAR_7;
  Segment *VAR_8 = 0;
  int VAR_9 = 0;

  *VAR_5 = 0;
  if( VAR_4==0 ) return VAR_1;


  VAR_7 = VAR_3->pWorker;
  if( !VAR_7 ){
    VAR_6 = FUNC_1(VAR_3);
    if( VAR_6!=VAR_2 ) return VAR_6;
    VAR_7 = VAR_3->pWorker;
    VAR_9 = 1;
  }


  VAR_8 = FUNC_0(VAR_7, VAR_4);

  if( VAR_8==0 ){

    VAR_6 = VAR_1;
  }else{
    Page *VAR_10 = 0;
    FileSystem *VAR_11 = VAR_3->pFS;
    LsmString VAR_12;

    FUNC_9(&VAR_12, VAR_3->pEnv);
    VAR_6 = FUNC_4(VAR_11, VAR_8, VAR_4, &VAR_10);
    while( VAR_6==VAR_2 && VAR_10 ){
      Page *VAR_13 = 0;
      FUNC_8(&VAR_12, " %lld", FUNC_6(VAR_10));
      VAR_6 = FUNC_5(VAR_8, VAR_10, 1, &VAR_13);
      FUNC_7(VAR_10);
      VAR_10 = VAR_13;
    }

    if( VAR_6!=VAR_2 ){
      FUNC_3(VAR_3->pEnv, VAR_12.z);
    }else{
      *VAR_5 = VAR_12.z;
    }
  }

  if( VAR_9 ){
    int VAR_14 = VAR_0;
    FUNC_2(VAR_3, 0, &VAR_14);
  }
  return VAR_6;
}
