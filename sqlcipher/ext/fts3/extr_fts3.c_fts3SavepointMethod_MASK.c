
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {int inTransaction; int mxSavepoint; scalar_t__ bIgnoreSavepoint; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_1, int VAR_2){
  int VAR_3 = VAR_0;
  FUNC_1(VAR_2);
  FUNC_2( ((Fts3Table *)VAR_1)->inTransaction );
  FUNC_2( ((Fts3Table *)VAR_1)->mxSavepoint <= VAR_2 );
  FUNC_0( ((Fts3Table *)VAR_1)->mxSavepoint = VAR_2 );
  if( ((Fts3Table *)VAR_1)->bIgnoreSavepoint==0 ){
    VAR_3 = FUNC_3(VAR_1);
  }
  return VAR_3;
}
