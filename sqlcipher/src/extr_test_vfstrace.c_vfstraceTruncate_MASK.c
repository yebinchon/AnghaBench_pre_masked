
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int zVfsName; } ;
typedef TYPE_2__ vfstrace_info ;
struct TYPE_8__ {TYPE_5__* pReal; int zFName; TYPE_2__* pInfo; } ;
typedef TYPE_3__ vfstrace_file ;
typedef int sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
struct TYPE_6__ {int (* xTruncate ) (TYPE_5__*,int ) ;} ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int,...) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_0, sqlite_int64 VAR_1){
  vfstrace_file *VAR_2 = (vfstrace_file *)VAR_0;
  vfstrace_info *VAR_3 = VAR_2->pInfo;
  int VAR_4;
  FUNC_1(VAR_3, "%s.xTruncate(%s,%lld)", VAR_3->zVfsName, VAR_2->zFName,
                  VAR_1);
  VAR_4 = VAR_2->pReal->pMethods->xTruncate(VAR_2->pReal, VAR_1);
  FUNC_1(VAR_3, " -> %d\n", VAR_4);
  return VAR_4;
}
