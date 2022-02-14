
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {int pConfig; } ;
typedef TYPE_1__ Fts5Table ;
typedef int Fts5FullTable ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  Fts5Table *VAR_2 = (Fts5Table*)VAR_1;
  int VAR_3 = FUNC_1(VAR_2->pConfig);
  if( VAR_3==VAR_0 ){
    FUNC_0((Fts5FullTable*)VAR_1);
  }
  return VAR_3;
}
