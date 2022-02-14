
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RowSetEntry {struct RowSetEntry* pRight; struct RowSetEntry* pLeft; } ;


 int FUNC_0 (int) ;
 struct RowSetEntry* FUNC_1 (struct RowSetEntry**,int) ;

__attribute__((used)) static struct RowSetEntry *FUNC_2(struct RowSetEntry *VAR_0){
  int VAR_1;
  struct RowSetEntry *VAR_2;
  struct RowSetEntry *VAR_3;

  FUNC_0( VAR_0!=0 );
  VAR_2 = VAR_0;
  VAR_0 = VAR_2->pRight;
  VAR_2->pLeft = VAR_2->pRight = 0;
  for(VAR_1=1; VAR_0; VAR_1++){
    VAR_3 = VAR_2;
    VAR_2 = VAR_0;
    VAR_0 = VAR_2->pRight;
    VAR_2->pLeft = VAR_3;
    VAR_2->pRight = FUNC_1(&VAR_0, VAR_1);
  }
  return VAR_2;
}
