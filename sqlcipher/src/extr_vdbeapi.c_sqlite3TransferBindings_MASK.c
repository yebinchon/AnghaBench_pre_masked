
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {int nVar; TYPE_1__* db; int * aVar; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_3__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(sqlite3_stmt *VAR_1, sqlite3_stmt *VAR_2){
  Vdbe *VAR_3 = (Vdbe*)VAR_1;
  Vdbe *VAR_4 = (Vdbe*)VAR_2;
  int VAR_5;
  FUNC_0( VAR_4->db==VAR_3->db );
  FUNC_0( VAR_4->nVar==VAR_3->nVar );
  FUNC_2(VAR_4->db->mutex);
  for(VAR_5=0; VAR_5<VAR_3->nVar; VAR_5++){
    FUNC_1(&VAR_4->aVar[VAR_5], &VAR_3->aVar[VAR_5]);
  }
  FUNC_3(VAR_4->db->mutex);
  return VAR_0;
}
