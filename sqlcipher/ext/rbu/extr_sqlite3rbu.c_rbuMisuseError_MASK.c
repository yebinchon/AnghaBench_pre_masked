
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rc; } ;
typedef TYPE_1__ sqlite3rbu ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static sqlite3rbu *FUNC_2(void){
  sqlite3rbu *VAR_1;
  VAR_1 = FUNC_1(sizeof(sqlite3rbu));
  if( VAR_1 ){
    FUNC_0(VAR_1, 0, sizeof(sqlite3rbu));
    VAR_1->rc = VAR_0;
  }
  return VAR_1;
}
