
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct unixFileId {int nRef; struct unixFileId* pPrev; struct unixFileId* pNext; int fileId; int ino; int pId; int dev; } ;
typedef struct unixFileId unixInodeInfo ;
struct TYPE_3__ {int h; scalar_t__ lastErrno; int fsFlags; int pId; } ;
typedef TYPE_1__ unixFile ;
struct stat {scalar_t__ st_size; int st_ino; int st_dev; } ;
typedef int fileId ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 struct unixFileId* VAR_8 ;
 scalar_t__ FUNC_1 (struct unixFileId*,int *,int) ;
 int FUNC_2 (int *,struct unixFileId*,int) ;
 int FUNC_3 (struct unixFileId*,int ,int) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,char*,int) ;
 struct unixFileId* FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(
  unixFile *VAR_9,
  unixInodeInfo **VAR_10
){
  int VAR_11;
  int VAR_12;
  struct unixFileId VAR_13;
  struct stat VAR_14;
  unixInodeInfo *VAR_15 = 0;

  FUNC_0( FUNC_7() );




  VAR_12 = VAR_9->h;
  VAR_11 = FUNC_4(VAR_12, &VAR_14);
  if( VAR_11!=0 ){
    VAR_9->lastErrno = VAR_7;



    return VAR_3;
  }
  FUNC_3(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.dev = VAR_14.st_dev;



  VAR_13.ino = VAR_14.st_ino;

  VAR_15 = VAR_8;
  while( VAR_15 && FUNC_1(&VAR_13, &VAR_15->fileId, sizeof(VAR_13)) ){
    VAR_15 = VAR_15->pNext;
  }
  if( VAR_15==0 ){
    VAR_15 = FUNC_6( sizeof(*VAR_15) );
    if( VAR_15==0 ){
      return VAR_5;
    }
    FUNC_3(VAR_15, 0, sizeof(*VAR_15));
    FUNC_2(&VAR_15->fileId, &VAR_13, sizeof(VAR_13));
    VAR_15->nRef = 1;
    VAR_15->pNext = VAR_8;
    VAR_15->pPrev = 0;
    if( VAR_8 ) VAR_8->pPrev = VAR_15;
    VAR_8 = VAR_15;
  }else{
    VAR_15->nRef++;
  }
  *VAR_10 = VAR_15;
  return VAR_6;
}
