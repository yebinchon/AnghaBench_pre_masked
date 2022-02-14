
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {TYPE_2__* db; int rc; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_4__ {int mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(sqlite3_stmt *VAR_0)
{





  Vdbe *VAR_1 = (Vdbe *)VAR_0;
  if( VAR_1 ){
    FUNC_0( VAR_1->db!=0 );
    FUNC_0( FUNC_2(VAR_1->db->mutex) );
    VAR_1->rc = FUNC_1(VAR_1->db, VAR_1->rc);
    FUNC_3(VAR_1->db->mutex);
  }
}
