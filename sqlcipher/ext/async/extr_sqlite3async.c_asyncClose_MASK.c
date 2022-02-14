
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_6__ {TYPE_2__* pData; } ;
struct TYPE_4__ {scalar_t__ eLock; } ;
struct TYPE_5__ {int closeOp; TYPE_1__ lock; } ;
typedef TYPE_2__ AsyncFileData ;
typedef TYPE_3__ AsyncFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_2){
  AsyncFileData *VAR_3 = ((AsyncFile *)VAR_2)->pData;


  FUNC_1(VAR_0);
  VAR_3->lock.eLock = 0;
  FUNC_2(VAR_0);

  FUNC_0(&VAR_3->closeOp);
  return VAR_1;
}
