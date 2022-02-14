
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct unixFileId {scalar_t__ pLockMutex; int nRef; struct unixFileId* pPrev; struct unixFileId* pNext; int fileId; scalar_t__ ino; int pId; int dev; } ;
typedef struct unixFileId unixInodeInfo ;
struct TYPE_5__ {int h; scalar_t__ lastErrno; int fsFlags; int pId; } ;
typedef TYPE_1__ unixFile ;
typedef scalar_t__ u64 ;
struct stat {scalar_t__ st_size; scalar_t__ st_ino; int st_dev; } ;
typedef int fileId ;
struct TYPE_6__ {scalar_t__ bCoreMutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 struct unixFileId* VAR_9 ;
 scalar_t__ FUNC_1 (struct unixFileId*,int *,int) ;
 int FUNC_2 (int *,struct unixFileId*,int) ;
 int FUNC_3 (struct unixFileId*,int ,int) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,char*,int) ;
 TYPE_3__ VAR_10 ;
 int FUNC_6 (struct unixFileId*) ;
 struct unixFileId* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(
  unixFile *VAR_11,
  unixInodeInfo **VAR_12
){
  int VAR_13;
  int VAR_14;
  struct unixFileId VAR_15;
  struct stat VAR_16;
  unixInodeInfo *VAR_17 = 0;

  FUNC_0( FUNC_10() );




  VAR_14 = VAR_11->h;
  VAR_13 = FUNC_4(VAR_14, &VAR_16);
  if( VAR_13!=0 ){
    FUNC_9(VAR_11, VAR_8);



    return VAR_3;
  }
  FUNC_3(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.dev = VAR_16.st_dev;



  VAR_15.ino = (u64)VAR_16.st_ino;

  FUNC_0( FUNC_10() );
  VAR_17 = VAR_9;
  while( VAR_17 && FUNC_1(&VAR_15, &VAR_17->fileId, sizeof(VAR_15)) ){
    VAR_17 = VAR_17->pNext;
  }
  if( VAR_17==0 ){
    VAR_17 = FUNC_7( sizeof(*VAR_17) );
    if( VAR_17==0 ){
      return VAR_6;
    }
    FUNC_3(VAR_17, 0, sizeof(*VAR_17));
    FUNC_2(&VAR_17->fileId, &VAR_15, sizeof(VAR_15));
    if( VAR_10.bCoreMutex ){
      VAR_17->pLockMutex = FUNC_8(VAR_4);
      if( VAR_17->pLockMutex==0 ){
        FUNC_6(VAR_17);
        return VAR_6;
      }
    }
    VAR_17->nRef = 1;
    FUNC_0( FUNC_10() );
    VAR_17->pNext = VAR_9;
    VAR_17->pPrev = 0;
    if( VAR_9 ) VAR_9->pPrev = VAR_17;
    VAR_9 = VAR_17;
  }else{
    VAR_17->nRef++;
  }
  *VAR_12 = VAR_17;
  return VAR_7;
}
