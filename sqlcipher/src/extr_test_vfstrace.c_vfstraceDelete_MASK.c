
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zVfsName; TYPE_2__* pRootVfs; } ;
typedef TYPE_1__ vfstrace_info ;
struct TYPE_8__ {int (* xDelete ) (TYPE_2__*,char const*,int) ;scalar_t__ pAppData; } ;
typedef TYPE_2__ sqlite3_vfs ;


 int FUNC_0 (TYPE_2__*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*,int ,char const*,int) ;

__attribute__((used)) static int FUNC_3(sqlite3_vfs *VAR_0, const char *VAR_1, int VAR_2){
  vfstrace_info *VAR_3 = (vfstrace_info*)VAR_0->pAppData;
  sqlite3_vfs *VAR_4 = VAR_3->pRootVfs;
  int VAR_5;
  FUNC_2(VAR_3, "%s.xDelete(\"%s\",%d)",
                  VAR_3->zVfsName, VAR_1, VAR_2);
  VAR_5 = VAR_4->xDelete(VAR_4, VAR_1, VAR_2);
  FUNC_1(VAR_3, " -> %s\n", VAR_5);
  return VAR_5;
}
