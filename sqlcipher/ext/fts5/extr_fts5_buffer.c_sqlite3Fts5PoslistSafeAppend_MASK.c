
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {int* p; size_t n; } ;
typedef TYPE_1__ Fts5Buffer ;


 scalar_t__ FUNC_0 (int*,int) ;

void FUNC_1(
  Fts5Buffer *VAR_0,
  i64 *VAR_1,
  i64 VAR_2
){
  static const i64 VAR_3 = ((i64)(0x7FFFFFFF)) << 32;
  if( (VAR_2 & VAR_3) != (*VAR_1 & VAR_3) ){
    VAR_0->p[VAR_0->n++] = 1;
    VAR_0->n += FUNC_0(&VAR_0->p[VAR_0->n], (VAR_2>>32));
    *VAR_1 = (VAR_2 & VAR_3);
  }
  VAR_0->n += FUNC_0(&VAR_0->p[VAR_0->n], (VAR_2-*VAR_1)+2);
  *VAR_1 = VAR_2;
}
