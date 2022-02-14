
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_6__ {int nCol; } ;
typedef TYPE_1__ Fts5Colset ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,size_t) ;
 scalar_t__ FUNC_1 (int*,int) ;

__attribute__((used)) static Fts5Colset *FUNC_2(int *VAR_0, Fts5Colset *VAR_1){
  Fts5Colset *VAR_2;
  if( VAR_1 ){
    sqlite3_int64 VAR_3 = sizeof(Fts5Colset) + (VAR_1->nCol-1) * sizeof(int);
    VAR_2 = (Fts5Colset*)FUNC_1(VAR_0, VAR_3);
    if( VAR_2 ){
      FUNC_0(VAR_2, VAR_1, (size_t)VAR_3);
    }
  }else{
    VAR_2 = 0;
  }
  return VAR_2;
}
