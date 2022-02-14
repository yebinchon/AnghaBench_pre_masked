
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xFullPathname ) (TYPE_1__*,char const*,int,char*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_6__ {TYPE_1__* pParent; } ;
typedef TYPE_2__ fs_vfs_t ;


 int FUNC_0 (TYPE_1__*,char const*,int,char*) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vfs *VAR_0,
  const char *VAR_1,
  int VAR_2,
  char *VAR_3
){
  sqlite3_vfs *VAR_4 = ((fs_vfs_t *)VAR_0)->pParent;
  return VAR_4->xFullPathname(VAR_4, VAR_1, VAR_2, VAR_3);
}
