
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab ;
typedef int Fts5Table ;
typedef int Fts5FullTable ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_1, int VAR_2){
  FUNC_0(VAR_2);
  FUNC_1((Fts5FullTable*)VAR_1, VAR_0, VAR_2);
  return FUNC_2((Fts5Table*)VAR_1);
}
