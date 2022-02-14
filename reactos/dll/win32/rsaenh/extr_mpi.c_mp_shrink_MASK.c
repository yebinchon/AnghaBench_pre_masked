
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; int used; int * dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2 (mp_int * VAR_2)
{
  mp_digit *VAR_3;
  if (VAR_2->alloc != VAR_2->used && VAR_2->used > 0) {
    if ((VAR_3 = FUNC_1(FUNC_0(), 0, VAR_2->dp, sizeof (mp_digit) * VAR_2->used)) == ((void*)0)) {
      return VAR_0;
    }
    VAR_2->dp = VAR_3;
    VAR_2->alloc = VAR_2->used;
  }
  return VAR_1;
}
