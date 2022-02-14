
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ xOpen; } ;
typedef TYPE_1__ sqlite3_vfs ;
typedef int VfslogVfs ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;

int FUNC_3(const char *VAR_3){
  sqlite3_vfs *VAR_4;
  VAR_4 = FUNC_0(VAR_3);
  if( !VAR_4 || VAR_4->xOpen!=VAR_2 ){
    return VAR_0;
  }
  FUNC_1(VAR_4);
  FUNC_2((VfslogVfs *)VAR_4);
  return VAR_1;
}
