
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
typedef int sqlite3_file ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
struct TYPE_6__ {int (* xShmBarrier ) (TYPE_5__*) ;} ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(sqlite3_file *VAR_0){
  vfstrace_file *VAR_1 = (vfstrace_file *)VAR_0;
  vfstrace_info *VAR_2 = VAR_1->pInfo;
  FUNC_1(VAR_2, "%s.xShmBarrier(%s)\n", VAR_2->zVfsName, VAR_1->zFName);
  VAR_1->pReal->pMethods->xShmBarrier(VAR_1->pReal);
}
