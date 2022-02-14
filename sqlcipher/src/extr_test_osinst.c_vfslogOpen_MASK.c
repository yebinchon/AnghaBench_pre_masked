
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef scalar_t__ sqlite3_uint64 ;
struct TYPE_8__ {int * pMethods; } ;
typedef TYPE_1__ sqlite3_file ;
struct TYPE_9__ {scalar_t__ iNextFileId; } ;
typedef TYPE_2__ VfslogVfs ;
struct TYPE_10__ {scalar_t__ iFileId; TYPE_1__* pReal; int * pVfslog; } ;
typedef TYPE_3__ VfslogFile ;
struct TYPE_11__ {int (* xOpen ) (TYPE_5__*,char const*,TYPE_1__*,int,int*) ;} ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,char const*,TYPE_1__*,int,int*) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(
  sqlite3_vfs *VAR_2,
  const char *VAR_3,
  sqlite3_file *VAR_4,
  int VAR_5,
  int *VAR_6
){
  int VAR_7;
  sqlite3_uint64 VAR_8;
  VfslogFile *VAR_9 = (VfslogFile *)VAR_4;
  VfslogVfs *VAR_10 = (VfslogVfs *)VAR_2;

  VAR_4->pMethods = &VAR_1;
  VAR_9->pReal = (sqlite3_file *)&VAR_9[1];
  VAR_9->pVfslog = VAR_2;
  VAR_9->iFileId = ++VAR_10->iNextFileId;

  VAR_8 = FUNC_4();
  VAR_7 = FUNC_0(VAR_2)->xOpen(FUNC_0(VAR_2), VAR_3, VAR_9->pReal, VAR_5, VAR_6);
  VAR_8 = FUNC_4() - VAR_8;

  FUNC_2(VAR_2, VAR_0, VAR_9->iFileId, VAR_8, VAR_7, 0, 0);
  FUNC_3(VAR_2, VAR_3);
  return VAR_7;
}
