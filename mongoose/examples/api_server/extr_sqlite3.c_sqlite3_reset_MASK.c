
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {TYPE_4__* db; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_6__ {int errMask; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(sqlite3_stmt *VAR_1){
  int VAR_2;
  if( VAR_1==0 ){
    VAR_2 = VAR_0;
  }else{
    Vdbe *VAR_3 = (Vdbe*)VAR_1;
    FUNC_4(VAR_3->db->mutex);
    VAR_2 = FUNC_2(VAR_3);
    FUNC_3(VAR_3);
    FUNC_0( (VAR_2 & (VAR_3->db->errMask))==VAR_2 );
    VAR_2 = FUNC_1(VAR_3->db, VAR_2);
    FUNC_5(VAR_3->db->mutex);
  }
  return VAR_2;
}
