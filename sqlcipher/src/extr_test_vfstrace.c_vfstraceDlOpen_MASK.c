
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zVfsName; TYPE_2__* pRootVfs; } ;
typedef TYPE_1__ vfstrace_info ;
struct TYPE_7__ {void* (* xDlOpen ) (TYPE_2__*,char const*) ;scalar_t__ pAppData; } ;
typedef TYPE_2__ sqlite3_vfs ;


 void* FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,char const*) ;

__attribute__((used)) static void *FUNC_2(sqlite3_vfs *VAR_0, const char *VAR_1){
  vfstrace_info *VAR_2 = (vfstrace_info*)VAR_0->pAppData;
  sqlite3_vfs *VAR_3 = VAR_2->pRootVfs;
  FUNC_1(VAR_2, "%s.xDlOpen(\"%s\")\n", VAR_2->zVfsName, VAR_1);
  return VAR_3->xDlOpen(VAR_3, VAR_1);
}
