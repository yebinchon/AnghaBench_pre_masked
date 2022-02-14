
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_7__ {TYPE_3__* pOut; } ;
typedef TYPE_2__ sqlite3_context ;
struct TYPE_8__ {TYPE_1__* db; } ;
struct TYPE_6__ {scalar_t__* aLimit; int mutex; } ;
typedef TYPE_3__ Mem ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(sqlite3_context *VAR_3, u64 VAR_4){
  Mem *VAR_5 = VAR_3->pOut;
  FUNC_0( FUNC_2(VAR_5->db->mutex) );
  if( VAR_4>(u64)VAR_5->db->aLimit[VAR_0] ){
    return VAR_2;
  }
  FUNC_1(VAR_3->pOut, (int)VAR_4);
  return VAR_1;
}
