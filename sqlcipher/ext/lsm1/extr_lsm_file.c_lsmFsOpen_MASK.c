
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pWorker; scalar_t__ pClient; TYPE_3__* pFS; int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_12__ {char* zDb; char* zLog; int nPagesize; int nCacheMax; int nHash; int fdDb; int pEnv; int szSector; TYPE_2__* pLsmFile; void* apHash; TYPE_1__* pDb; int nMetaRwSize; int nMetasize; int nBlocksize; } ;
struct TYPE_11__ {int pFile; } ;
typedef int Page ;
typedef TYPE_2__ LsmFile ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int ,int*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 void* FUNC_5 (int ,int,int*) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (char const*) ;

int FUNC_9(
  lsm_db *VAR_5,
  const char *VAR_6,
  int VAR_7
){
  FileSystem *VAR_8;
  int VAR_9 = VAR_4;
  int VAR_10 = FUNC_8(VAR_6);
  int VAR_11;

  FUNC_0( VAR_5->pFS==0 );
  FUNC_0( VAR_5->pWorker==0 && VAR_5->pClient==0 );

  VAR_11 = sizeof(FileSystem) + VAR_10+1 + VAR_10+4+1;
  VAR_8 = (FileSystem *)FUNC_5(VAR_5->pEnv, VAR_11, &VAR_9);
  if( VAR_8 ){
    LsmFile *VAR_12;
    VAR_8->zDb = (char *)&VAR_8[1];
    VAR_8->zLog = &VAR_8->zDb[VAR_10+1];
    VAR_8->nPagesize = VAR_1;
    VAR_8->nBlocksize = VAR_0;
    VAR_8->nMetasize = VAR_2;
    VAR_8->nMetaRwSize = VAR_3;
    VAR_8->pDb = VAR_5;
    VAR_8->pEnv = VAR_5->pEnv;


    FUNC_6(VAR_8->zDb, VAR_6, VAR_10+1);
    FUNC_6(VAR_8->zLog, VAR_6, VAR_10);
    FUNC_6(&VAR_8->zLog[VAR_10], "-log", 5);



    VAR_8->nCacheMax = 2048*1024 / VAR_8->nPagesize;
    VAR_8->nHash = 4096;
    VAR_8->apHash = FUNC_5(VAR_5->pEnv, sizeof(Page *) * VAR_8->nHash, &VAR_9);


    VAR_12 = FUNC_2(VAR_5);
    if( VAR_12 ){
      VAR_8->pLsmFile = VAR_12;
      VAR_8->fdDb = VAR_12->pFile;
      FUNC_7(VAR_12, 0, sizeof(LsmFile));
    }else{
      VAR_8->pLsmFile = FUNC_5(VAR_5->pEnv, sizeof(LsmFile), &VAR_9);
      if( VAR_9==VAR_4 ){
        VAR_8->fdDb = FUNC_1(VAR_8, VAR_7, 0, &VAR_9);
      }
    }

    if( VAR_9!=VAR_4 ){
      FUNC_4(VAR_8);
      VAR_8 = 0;
    }else{
      VAR_8->szSector = FUNC_3(VAR_8->pEnv, VAR_8->fdDb);
    }
  }

  VAR_5->pFS = VAR_8;
  return VAR_9;
}
