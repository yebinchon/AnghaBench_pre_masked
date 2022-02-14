
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {int n; int* a; } ;
typedef TYPE_1__ Blob ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*) ;
 scalar_t__ FUNC_1 (int*,int *) ;

__attribute__((used)) static int FUNC_2(Blob *VAR_2, i64 *VAR_3, int *VAR_4){
  const int VAR_5 = VAR_2->n;
  int VAR_6;

  VAR_6 = VAR_2->n-2;
  while( VAR_6>0 && (VAR_2->a[VAR_6-1] & 0x80) ) VAR_6--;
  while( VAR_6>0 && (VAR_2->a[VAR_6-1] & 0x80) ) VAR_6--;

  VAR_2->n = VAR_6;
  VAR_6 += FUNC_1(&VAR_2->a[VAR_6], VAR_3);
  VAR_6 += FUNC_0(&VAR_2->a[VAR_6], VAR_4);
  if( VAR_6!=VAR_5 ) return VAR_0;

  return VAR_1;
}
