
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RowSetEntry {struct RowSetEntry* pRight; struct RowSetEntry* pLeft; } ;



__attribute__((used)) static struct RowSetEntry *FUNC_0(
  struct RowSetEntry **VAR_0,
  int VAR_1
){
  struct RowSetEntry *VAR_2;
  struct RowSetEntry *VAR_3;
  if( *VAR_0==0 ){

    return 0;
  }
  if( VAR_1>1 ){



    VAR_3 = FUNC_0(VAR_0, VAR_1-1);
    VAR_2 = *VAR_0;
    if( VAR_2==0 ){


      return VAR_3;
    }
    VAR_2->pLeft = VAR_3;
    *VAR_0 = VAR_2->pRight;
    VAR_2->pRight = FUNC_0(VAR_0, VAR_1-1);
  }else{
    VAR_2 = *VAR_0;
    *VAR_0 = VAR_2->pRight;
    VAR_2->pLeft = VAR_2->pRight = 0;
  }
  return VAR_2;
}
