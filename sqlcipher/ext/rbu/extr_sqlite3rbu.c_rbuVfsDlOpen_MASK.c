
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* (* xDlOpen ) (TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_6__ {TYPE_1__* pRealVfs; } ;
typedef TYPE_2__ rbu_vfs ;


 void* FUNC_0 (TYPE_1__*,char const*) ;

__attribute__((used)) static void *FUNC_1(sqlite3_vfs *VAR_0, const char *VAR_1){
  sqlite3_vfs *VAR_2 = ((rbu_vfs*)VAR_0)->pRealVfs;
  return VAR_2->xDlOpen(VAR_2, VAR_1);
}
