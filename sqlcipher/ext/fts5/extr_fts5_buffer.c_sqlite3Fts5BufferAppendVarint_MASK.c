
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_4__ {size_t n; int * p; } ;
typedef TYPE_1__ Fts5Buffer ;


 scalar_t__ FUNC_0 (int*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;

void FUNC_2(int *VAR_0, Fts5Buffer *VAR_1, i64 VAR_2){
  if( FUNC_0(VAR_0, VAR_1, 9) ) return;
  VAR_1->n += FUNC_1(&VAR_1->p[VAR_1->n], VAR_2);
}
