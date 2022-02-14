
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int zVfsName; } ;
typedef TYPE_3__ vfstrace_info ;
struct TYPE_9__ {scalar_t__ pMethods; } ;
struct TYPE_11__ {TYPE_2__ base; TYPE_7__* pReal; int zFName; TYPE_3__* pInfo; } ;
typedef TYPE_4__ vfstrace_file ;
typedef int sqlite3_file ;
struct TYPE_12__ {TYPE_1__* pMethods; } ;
struct TYPE_8__ {int (* xClose ) (TYPE_7__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_1){
  vfstrace_file *VAR_2 = (vfstrace_file *)VAR_1;
  vfstrace_info *VAR_3 = VAR_2->pInfo;
  int VAR_4;
  FUNC_3(VAR_3, "%s.xClose(%s)", VAR_3->zVfsName, VAR_2->zFName);
  VAR_4 = VAR_2->pReal->pMethods->xClose(VAR_2->pReal);
  FUNC_2(VAR_3, " -> %s\n", VAR_4);
  if( VAR_4==VAR_0 ){
    FUNC_0((void*)VAR_2->base.pMethods);
    VAR_2->base.pMethods = 0;
  }
  return VAR_4;
}
