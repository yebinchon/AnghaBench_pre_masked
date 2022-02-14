
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_value ;
struct TYPE_7__ {TYPE_6__* db; TYPE_2__* aVar; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;

sqlite3_value *FUNC_4(Vdbe *VAR_3, int VAR_4, u8 VAR_5){
  FUNC_0( VAR_4>0 );
  if( VAR_3 ){
    Mem *VAR_6 = &VAR_3->aVar[VAR_4-1];
    FUNC_0( (VAR_3->db->flags & VAR_1)==0 );
    if( 0==(VAR_6->flags & VAR_0) ){
      sqlite3_value *VAR_7 = FUNC_2(VAR_3->db);
      if( VAR_7 ){
        FUNC_3((Mem *)VAR_7, VAR_6);
        FUNC_1(VAR_7, VAR_5, VAR_2);
      }
      return VAR_7;
    }
  }
  return 0;
}
