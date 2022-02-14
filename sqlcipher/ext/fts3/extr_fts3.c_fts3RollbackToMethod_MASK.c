
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {int mxSavepoint; int inTransaction; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_1, int VAR_2){
  Fts3Table *VAR_3 = (Fts3Table*)VAR_1;
  FUNC_1(VAR_2);
  FUNC_2( VAR_3->inTransaction );
  FUNC_0( VAR_3->mxSavepoint = VAR_2 );
  FUNC_3(VAR_3);
  return VAR_0;
}
