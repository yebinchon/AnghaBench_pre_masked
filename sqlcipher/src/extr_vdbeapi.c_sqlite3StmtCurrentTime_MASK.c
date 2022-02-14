
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_9__ {TYPE_2__* pOut; TYPE_3__* pVdbe; } ;
typedef TYPE_4__ sqlite3_context ;
struct TYPE_8__ {scalar_t__ iCurrentTime; } ;
struct TYPE_7__ {TYPE_1__* db; } ;
struct TYPE_6__ {int pVfs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*) ;

sqlite3_int64 FUNC_2(sqlite3_context *VAR_0){
  int VAR_1;

  sqlite3_int64 *VAR_2 = &VAR_0->pVdbe->iCurrentTime;
  FUNC_0( VAR_0->pVdbe!=0 );




  if( *VAR_2==0 ){
    VAR_1 = FUNC_1(VAR_0->pOut->db->pVfs, VAR_2);
    if( VAR_1 ) *VAR_2 = 0;
  }
  return *VAR_2;
}
