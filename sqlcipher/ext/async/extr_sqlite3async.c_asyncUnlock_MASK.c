
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_7__ {TYPE_2__* pData; } ;
struct TYPE_5__ {int eLock; } ;
struct TYPE_6__ {TYPE_1__ lock; scalar_t__ zName; } ;
typedef TYPE_1__ AsyncFileLock ;
typedef TYPE_2__ AsyncFileData ;
typedef TYPE_3__ AsyncFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_4, int VAR_5){
  int VAR_6 = VAR_3;
  AsyncFileData *VAR_7 = ((AsyncFile *)VAR_4)->pData;
  if( VAR_7->zName ){
    AsyncFileLock *VAR_8 = &VAR_7->lock;
    FUNC_2(VAR_1);
    FUNC_2(VAR_0);
    VAR_8->eLock = FUNC_0(VAR_8->eLock, VAR_5);
    VAR_6 = FUNC_1(VAR_7, VAR_2, 0, VAR_5, 0);
    FUNC_3(VAR_0);
    FUNC_3(VAR_1);
  }
  return VAR_6;
}
