
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int alloc; int used; int* dp; int sign; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(const mp_int * VAR_3, mp_int * VAR_4)
{
  int VAR_5, VAR_6, VAR_7;


  if (VAR_4->alloc < VAR_3->used + 1) {
    if ((VAR_6 = FUNC_0 (VAR_4, VAR_3->used + 1)) != VAR_2) {
      return VAR_6;
    }
  }

  VAR_7 = VAR_4->used;
  VAR_4->used = VAR_3->used;

  {
    register mp_digit VAR_8, VAR_9, *VAR_10, *VAR_11;


    VAR_10 = VAR_3->dp;


    VAR_11 = VAR_4->dp;


    VAR_8 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_3->used; VAR_5++) {




      VAR_9 = *VAR_10 >> ((mp_digit)(VAR_0 - 1));


      *VAR_11++ = ((*VAR_10++ << ((mp_digit)1)) | VAR_8) & VAR_1;




      VAR_8 = VAR_9;
    }


    if (VAR_8 != 0) {

      *VAR_11 = 1;
      ++(VAR_4->used);
    }




    VAR_11 = VAR_4->dp + VAR_4->used;
    for (VAR_5 = VAR_4->used; VAR_5 < VAR_7; VAR_5++) {
      *VAR_11++ = 0;
    }
  }
  VAR_4->sign = VAR_3->sign;
  return VAR_2;
}
