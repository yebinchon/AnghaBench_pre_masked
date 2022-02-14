
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {int nResColumn; TYPE_2__* db; int * pResultSet; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_5__ {int mutex; } ;
typedef int Mem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static Mem *FUNC_4(sqlite3_stmt *VAR_1, int VAR_2){
  Vdbe *VAR_3;
  Mem *VAR_4;

  VAR_3 = (Vdbe *)VAR_1;
  if( VAR_3==0 ) return (Mem*)FUNC_1();
  FUNC_0( VAR_3->db );
  FUNC_3(VAR_3->db->mutex);
  if( VAR_3->pResultSet!=0 && VAR_2<VAR_3->nResColumn && VAR_2>=0 ){
    VAR_4 = &VAR_3->pResultSet[VAR_2];
  }else{
    FUNC_2(VAR_3->db, VAR_0);
    VAR_4 = (Mem*)FUNC_1();
  }
  return VAR_4;
}
