
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dev; scalar_t__ ino; } ;
struct TYPE_7__ {int pLockMutex; TYPE_3__* pUnused; struct TYPE_7__* pNext; TYPE_1__ fileId; } ;
typedef TYPE_2__ unixInodeInfo ;
typedef scalar_t__ u64 ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_8__ {int flags; struct TYPE_8__* pNext; } ;
typedef TYPE_3__ UnixUnusedFd ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static UnixUnusedFd *FUNC_7(const char *VAR_1, int VAR_2){
  UnixUnusedFd *VAR_3 = 0;







  struct stat VAR_4;

  FUNC_5();
  if( VAR_0!=0 && 0==FUNC_1(VAR_1, &VAR_4) ){
    unixInodeInfo *VAR_5;

    VAR_5 = VAR_0;
    while( VAR_5 && (VAR_5->fileId.dev!=VAR_4.st_dev
                     || VAR_5->fileId.ino!=(u64)VAR_4.st_ino) ){
       VAR_5 = VAR_5->pNext;
    }
    if( VAR_5 ){
      UnixUnusedFd **VAR_6;
      FUNC_0( FUNC_4(VAR_5->pLockMutex) );
      FUNC_2(VAR_5->pLockMutex);
      for(VAR_6=&VAR_5->pUnused; *VAR_6 && (*VAR_6)->flags!=VAR_2; VAR_6=&((*VAR_6)->pNext));
      VAR_3 = *VAR_6;
      if( VAR_3 ){
        *VAR_6 = VAR_3->pNext;
      }
      FUNC_3(VAR_5->pLockMutex);
    }
  }
  FUNC_6();

  return VAR_3;
}
