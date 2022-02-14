
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

int FUNC_5(sqlite3_stmt *VAR_2){
  int VAR_3;
  if( VAR_2==0 ){


    VAR_3 = VAR_1;
  }else{
    Vdbe *VAR_4 = (Vdbe*)VAR_2;
    sqlite3 *VAR_5 = VAR_4->db;
    if( FUNC_4(VAR_4) ) return VAR_0;
    FUNC_3(VAR_5->mutex);
    VAR_3 = FUNC_2(VAR_4);
    VAR_3 = FUNC_0(VAR_5, VAR_3);
    FUNC_1(VAR_5);
  }
  return VAR_3;
}
