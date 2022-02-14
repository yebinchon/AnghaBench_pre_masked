
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ a; scalar_t__ b; } ;
typedef TYPE_1__ Fts5PhraseIter ;
typedef int Fts5Context ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(
  Fts5Context *VAR_0,
  Fts5PhraseIter *VAR_1,
  int *VAR_2, int *VAR_3
){
  FUNC_0(VAR_0);
  if( VAR_1->a>=VAR_1->b ){
    *VAR_2 = -1;
    *VAR_3 = -1;
  }else{
    int VAR_4;
    VAR_1->a += FUNC_1(VAR_1->a, VAR_4);
    if( VAR_4==1 ){
      VAR_1->a += FUNC_1(VAR_1->a, VAR_4);
      *VAR_2 = VAR_4;
      *VAR_3 = 0;
      VAR_1->a += FUNC_1(VAR_1->a, VAR_4);
    }
    *VAR_3 += (VAR_4-2);
  }
}
