
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {int iFileId; int pVfslog; TYPE_3__* pReal; } ;
typedef TYPE_2__ VfslogFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xShmLock ) (TYPE_3__*,int,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int,int) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int,int ,int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1, int VAR_2, int VAR_3, int VAR_4){
  int VAR_5;
  sqlite3_uint64 VAR_6;
  VfslogFile *VAR_7 = (VfslogFile *)VAR_1;
  VAR_6 = FUNC_2();
  VAR_5 = VAR_7->pReal->pMethods->xShmLock(VAR_7->pReal, VAR_2, VAR_3, VAR_4);
  VAR_6 = FUNC_2() - VAR_6;
  FUNC_1(VAR_7->pVfslog, VAR_0, VAR_7->iFileId, VAR_6, VAR_5, 0, 0);
  return VAR_5;
}
