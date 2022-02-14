
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* xDlOpen ) (TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;


 void* FUNC_0 (TYPE_1__*,char const*) ;

void *FUNC_1(sqlite3_vfs *VAR_0, const char *VAR_1){
  return VAR_0->xDlOpen(VAR_0, VAR_1);
}
