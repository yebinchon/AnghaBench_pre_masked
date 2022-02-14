
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Fts5Iter ;
typedef int Fts5IndexIter ;


 scalar_t__ FUNC_0 (int *,int*) ;

const char *FUNC_1(Fts5IndexIter *VAR_0, int *VAR_1){
  int VAR_2;
  const char *VAR_3 = (const char*)FUNC_0((Fts5Iter*)VAR_0, &VAR_2);
  *VAR_1 = VAR_2-1;
  return &VAR_3[1];
}
