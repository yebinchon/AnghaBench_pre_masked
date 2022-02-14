
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ xOpen; } ;
typedef TYPE_1__ sqlite3_vfs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char const*) ;

int FUNC_3(const char *VAR_4, const char *VAR_5){
  sqlite3_vfs *VAR_6;
  VAR_6 = FUNC_0(VAR_4);
  if( !VAR_6 || VAR_6->xOpen!=VAR_3 ){
    return VAR_1;
  }
  FUNC_1(VAR_6, VAR_0, 0, 0, 0, 0, 0);
  FUNC_2(VAR_6, VAR_5);
  return VAR_2;
}
