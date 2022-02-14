
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xDelete ) (TYPE_1__*,char const*,int) ;} ;
typedef TYPE_1__ sqlite3_vfs ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;

int FUNC_3(sqlite3_vfs *VAR_0, const char *VAR_1, int VAR_2){
  FUNC_0(0);
  FUNC_1( VAR_2==0 || VAR_2==1 );
  return VAR_0->xDelete(VAR_0, VAR_1, VAR_2);
}
