
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
struct TYPE_9__ {TYPE_2__* pOut; } ;
typedef TYPE_3__ sqlite3_context ;
struct TYPE_8__ {TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;


 void FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void const*,void (*) (void*),TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,void const*,int,int ,void (*) (void*)) ;
 int FUNC_4 (int ) ;

void FUNC_5(
  sqlite3_context *VAR_0,
  const void *VAR_1,
  sqlite3_uint64 VAR_2,
  void (*VAR_3)(void *)
){
  FUNC_1( FUNC_4(VAR_0->pOut->db->mutex) );
  FUNC_1( VAR_3!=FUNC_0 );
  if( VAR_2>0x7fffffff ){
    (void)FUNC_2(VAR_1, VAR_3, VAR_0);
  }else{
    FUNC_3(VAR_0, VAR_1, (int)VAR_2, 0, VAR_3);
  }
}
