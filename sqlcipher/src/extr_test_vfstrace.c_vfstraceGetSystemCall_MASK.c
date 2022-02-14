
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pRootVfs; } ;
typedef TYPE_1__ vfstrace_info ;
struct TYPE_6__ {int (* xGetSystemCall ) (TYPE_2__*,char const*) ;scalar_t__ pAppData; } ;
typedef TYPE_2__ sqlite3_vfs ;
typedef int sqlite3_syscall_ptr ;


 int FUNC_0 (TYPE_2__*,char const*) ;

__attribute__((used)) static sqlite3_syscall_ptr FUNC_1(
  sqlite3_vfs *VAR_0,
  const char *VAR_1
){
  vfstrace_info *VAR_2 = (vfstrace_info*)VAR_0->pAppData;
  sqlite3_vfs *VAR_3 = VAR_2->pRootVfs;
  return VAR_3->xGetSystemCall(VAR_3, VAR_1);
}
