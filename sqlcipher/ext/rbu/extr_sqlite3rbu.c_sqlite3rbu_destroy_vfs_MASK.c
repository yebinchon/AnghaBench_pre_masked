
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ xOpen; } ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_2__ rbu_vfs ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(const char *VAR_1){
  sqlite3_vfs *VAR_2 = FUNC_2(VAR_1);
  if( VAR_2 && VAR_2->xOpen==VAR_0 ){
    FUNC_1(((rbu_vfs*)VAR_2)->mutex);
    FUNC_3(VAR_2);
    FUNC_0(VAR_2);
  }
}
