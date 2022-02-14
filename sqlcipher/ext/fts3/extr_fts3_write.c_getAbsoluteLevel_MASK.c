
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {int nIndex; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static sqlite3_int64 FUNC_2(
  Fts3Table *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4
){
  sqlite3_int64 VAR_5;
  FUNC_1( VAR_2>=0 );
  FUNC_0( VAR_1->nIndex>0 );
  FUNC_0( VAR_3>=0 && VAR_3<VAR_1->nIndex );

  VAR_5 = ((sqlite3_int64)VAR_2 * VAR_1->nIndex + VAR_3) * VAR_0;
  return VAR_5 + VAR_4;
}
