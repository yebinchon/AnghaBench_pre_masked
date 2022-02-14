
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xFullPathname ) (TYPE_1__*,char const*,int,char*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char const*,int,char*) ;

int FUNC_2(
  sqlite3_vfs *VAR_0,
  const char *VAR_1,
  int VAR_2,
  char *VAR_3
){
  FUNC_0(0);
  VAR_3[0] = 0;
  return VAR_0->xFullPathname(VAR_0, VAR_1, VAR_2, VAR_3);
}
