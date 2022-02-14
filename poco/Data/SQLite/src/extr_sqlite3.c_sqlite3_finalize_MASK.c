
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_9__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

int FUNC_6(sqlite3_stmt *VAR_2){
  int VAR_3;
  if( VAR_2==0 ){


    VAR_3 = VAR_1;
  }else{
    Vdbe *VAR_4 = (Vdbe*)VAR_2;
    sqlite3 *VAR_5 = VAR_4->db;
    if( FUNC_5(VAR_4) ) return VAR_0;
    FUNC_4(VAR_5->mutex);
    FUNC_0(VAR_5, VAR_4);
    VAR_3 = FUNC_3(VAR_4);
    VAR_3 = FUNC_1(VAR_5, VAR_3);
    FUNC_2(VAR_5);
  }
  return VAR_3;
}
