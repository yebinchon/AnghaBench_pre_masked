
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {int iFileId; int pVfslog; TYPE_3__* pReal; } ;
typedef TYPE_2__ VfslogFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xFileSize ) (TYPE_3__*,scalar_t__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1, sqlite_int64 *VAR_2){
  int VAR_3;
  sqlite3_uint64 VAR_4;
  VfslogFile *VAR_5 = (VfslogFile *)VAR_1;
  VAR_4 = FUNC_2();
  VAR_3 = VAR_5->pReal->pMethods->xFileSize(VAR_5->pReal, VAR_2);
  VAR_4 = FUNC_2() - VAR_4;
  FUNC_1(VAR_5->pVfslog, VAR_0, VAR_5->iFileId, VAR_4, VAR_3, 0, (int)*VAR_2);
  return VAR_3;
}
