
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xDlClose ) (TYPE_1__*,void*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_6__ {TYPE_1__* pParent; } ;
typedef TYPE_2__ fs_vfs_t ;


 int FUNC_0 (TYPE_1__*,void*) ;

__attribute__((used)) static void FUNC_1(sqlite3_vfs *VAR_0, void *VAR_1){
  sqlite3_vfs *VAR_2 = ((fs_vfs_t *)VAR_0)->pParent;
  VAR_2->xDlClose(VAR_2, VAR_1);
}
