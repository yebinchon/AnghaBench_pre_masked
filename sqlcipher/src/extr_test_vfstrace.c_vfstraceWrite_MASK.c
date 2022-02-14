
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int zVfsName; } ;
typedef TYPE_2__ vfstrace_info ;
struct TYPE_9__ {TYPE_6__* pReal; int zFName; TYPE_2__* pInfo; } ;
typedef TYPE_3__ vfstrace_file ;
typedef int sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_10__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int (* xWrite ) (TYPE_6__*,void const*,int,int ) ;} ;


 int FUNC_0 (TYPE_6__*,void const*,int,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_file *VAR_0,
  const void *VAR_1,
  int VAR_2,
  sqlite_int64 VAR_3
){
  vfstrace_file *VAR_4 = (vfstrace_file *)VAR_0;
  vfstrace_info *VAR_5 = VAR_4->pInfo;
  int VAR_6;
  FUNC_2(VAR_5, "%s.xWrite(%s,n=%d,ofst=%lld)",
                  VAR_5->zVfsName, VAR_4->zFName, VAR_2, VAR_3);
  VAR_6 = VAR_4->pReal->pMethods->xWrite(VAR_4->pReal, VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_5, " -> %s\n", VAR_6);
  return VAR_6;
}
