
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zVfsName; TYPE_2__* pRootVfs; } ;
typedef TYPE_1__ vfstrace_info ;
struct TYPE_7__ {int (* xDlError ) (TYPE_2__*,int,char*) ;scalar_t__ pAppData; } ;
typedef TYPE_2__ sqlite3_vfs ;


 int FUNC_0 (TYPE_2__*,int,char*) ;
 int FUNC_1 (TYPE_1__*,char*,char*,...) ;

__attribute__((used)) static void FUNC_2(sqlite3_vfs *VAR_0, int VAR_1, char *VAR_2){
  vfstrace_info *VAR_3 = (vfstrace_info*)VAR_0->pAppData;
  sqlite3_vfs *VAR_4 = VAR_3->pRootVfs;
  FUNC_1(VAR_3, "%s.xDlError(%d)", VAR_3->zVfsName, VAR_1);
  VAR_4->xDlError(VAR_4, VAR_1, VAR_2);
  FUNC_1(VAR_3, " -> \"%s\"", VAR_2);
}
