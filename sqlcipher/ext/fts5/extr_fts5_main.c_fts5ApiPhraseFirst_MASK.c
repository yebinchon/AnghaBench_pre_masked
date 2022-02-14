
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * a; int * b; } ;
typedef TYPE_1__ Fts5PhraseIter ;
typedef int Fts5Cursor ;
typedef int Fts5Context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int*,int*) ;
 int FUNC_1 (int *,int,int **,int*) ;

__attribute__((used)) static int FUNC_2(
  Fts5Context *VAR_1,
  int VAR_2,
  Fts5PhraseIter *VAR_3,
  int *VAR_4, int *VAR_5
){
  Fts5Cursor *VAR_6 = (Fts5Cursor*)VAR_1;
  int VAR_7;
  int VAR_8 = FUNC_1(VAR_6, VAR_2, &VAR_3->a, &VAR_7);
  if( VAR_8==VAR_0 ){
    VAR_3->b = &VAR_3->a[VAR_7];
    *VAR_4 = 0;
    *VAR_5 = 0;
    FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
  }
  return VAR_8;
}
