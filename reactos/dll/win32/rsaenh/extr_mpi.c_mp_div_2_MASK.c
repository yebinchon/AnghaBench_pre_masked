
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int alloc; int used; int* dp; int sign; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(const mp_int * VAR_2, mp_int * VAR_3)
{
  int VAR_4, VAR_5, VAR_6;


  if (VAR_3->alloc < VAR_2->used) {
    if ((VAR_5 = FUNC_1 (VAR_3, VAR_2->used)) != VAR_1) {
      return VAR_5;
    }
  }

  VAR_6 = VAR_3->used;
  VAR_3->used = VAR_2->used;
  {
    register mp_digit VAR_7, VAR_8, *VAR_9, *VAR_10;


    VAR_9 = VAR_2->dp + VAR_3->used - 1;


    VAR_10 = VAR_3->dp + VAR_3->used - 1;


    VAR_7 = 0;
    for (VAR_4 = VAR_3->used - 1; VAR_4 >= 0; VAR_4--) {

      VAR_8 = *VAR_9 & 1;


      *VAR_10-- = (*VAR_9-- >> 1) | (VAR_7 << (VAR_0 - 1));


      VAR_7 = VAR_8;
    }


    VAR_10 = VAR_3->dp + VAR_3->used;
    for (VAR_4 = VAR_3->used; VAR_4 < VAR_6; VAR_4++) {
      *VAR_10++ = 0;
    }
  }
  VAR_3->sign = VAR_2->sign;
  FUNC_0 (VAR_3);
  return VAR_1;
}
