
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int i64 ;
struct TYPE_4__ {int pReadRowid; } ;
typedef int RtreeNode ;
typedef TYPE_1__ Rtree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int **) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
  Rtree *VAR_1,
  i64 VAR_2,
  RtreeNode **VAR_3,
  sqlite3_int64 *VAR_4
){
  int VAR_5;
  *VAR_3 = 0;
  FUNC_1(VAR_1->pReadRowid, 1, VAR_2);
  if( FUNC_4(VAR_1->pReadRowid)==VAR_0 ){
    i64 VAR_6 = FUNC_2(VAR_1->pReadRowid, 0);
    if( VAR_4 ) *VAR_4 = VAR_6;
    VAR_5 = FUNC_0(VAR_1, VAR_6, 0, VAR_3);
    FUNC_3(VAR_1->pReadRowid);
  }else{
    VAR_5 = FUNC_3(VAR_1->pReadRowid);
  }
  return VAR_5;
}
