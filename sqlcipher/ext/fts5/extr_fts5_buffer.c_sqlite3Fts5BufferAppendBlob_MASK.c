
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {size_t n; int * p; } ;
typedef TYPE_1__ Fts5Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *,int const*,scalar_t__) ;

void FUNC_3(
  int *VAR_0,
  Fts5Buffer *VAR_1,
  u32 VAR_2,
  const u8 *VAR_3
){
  FUNC_0( *VAR_0 || VAR_2>=0 );
  if( VAR_2 ){
    if( FUNC_1(VAR_0, VAR_1, VAR_2) ) return;
    FUNC_2(&VAR_1->p[VAR_1->n], VAR_3, VAR_2);
    VAR_1->n += VAR_2;
  }
}
