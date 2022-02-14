
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int i64 ;
struct TYPE_3__ {int n; int * p; } ;
typedef TYPE_1__ Fts5Buffer ;


 int FUNC_0 (int *,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(Fts5Buffer *VAR_0, int *VAR_1, i64 *VAR_2){
  int VAR_3 = *VAR_1;
  if( VAR_3>=VAR_0->n ){
    *VAR_1 = -1;
  }else{
    u64 VAR_4;
    *VAR_1 = VAR_3 + FUNC_0(&VAR_0->p[VAR_3], &VAR_4);
    *VAR_2 += VAR_4;
  }
}
