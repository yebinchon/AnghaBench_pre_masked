
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_4__ {int n; int * a; } ;
typedef TYPE_1__ Blob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(
  Blob *VAR_2,
  i64 VAR_3,
  int VAR_4,
  int *VAR_5
){
  FUNC_0(VAR_2, VAR_2->n + 2*VAR_0, VAR_5);
  if( *VAR_5==VAR_1 ){
    VAR_2->n += FUNC_1(&VAR_2->a[VAR_2->n], VAR_3);
    VAR_2->n += FUNC_1(&VAR_2->a[VAR_2->n], (i64)VAR_4);
  }
}
