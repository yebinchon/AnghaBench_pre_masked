
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rc; scalar_t__ zErrmsg; int zTarget; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_8__ {int (* xDelete ) (TYPE_2__*,char*,int ) ;} ;
typedef TYPE_2__ sqlite3_vfs ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void FUNC_5(sqlite3rbu *VAR_1){
  char *VAR_2 = FUNC_1(VAR_1, "%s-oal", VAR_1->zTarget);
  if( VAR_2 ){
    sqlite3_vfs *VAR_3 = FUNC_3(0);
    FUNC_0( VAR_3 && VAR_1->rc==VAR_0 && VAR_1->zErrmsg==0 );
    VAR_3->xDelete(VAR_3, VAR_2, 0);
    FUNC_2(VAR_2);
  }
}
