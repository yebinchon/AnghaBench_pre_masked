
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef scalar_t__ mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0 (const mp_int * VAR_3, const mp_int * VAR_4)
{
  int VAR_5;
  mp_digit *VAR_6, *VAR_7;


  if (VAR_3->used > VAR_4->used) {
    return VAR_1;
  }

  if (VAR_3->used < VAR_4->used) {
    return VAR_2;
  }


  VAR_6 = VAR_3->dp + (VAR_3->used - 1);


  VAR_7 = VAR_4->dp + (VAR_3->used - 1);


  for (VAR_5 = 0; VAR_5 < VAR_3->used; ++VAR_5, --VAR_6, --VAR_7) {
    if (*VAR_6 > *VAR_7) {
      return VAR_1;
    }

    if (*VAR_6 < *VAR_7) {
      return VAR_2;
    }
  }
  return VAR_0;
}
