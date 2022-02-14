
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_6__ {int alloc; int used; void** dp; int sign; } ;
typedef TYPE_1__ mp_int ;
typedef void* mp_digit ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_2 (const mp_int * VAR_3, mp_digit VAR_4, mp_int * VAR_5)
{
  mp_digit VAR_6, *VAR_7, *VAR_8;
  mp_word VAR_9;
  int VAR_10, VAR_11, VAR_12;


  if (VAR_5->alloc < VAR_3->used + 1) {
    if ((VAR_11 = FUNC_1 (VAR_5, VAR_3->used + 1)) != VAR_2) {
      return VAR_11;
    }
  }


  VAR_12 = VAR_5->used;


  VAR_5->sign = VAR_3->sign;


  VAR_7 = VAR_3->dp;


  VAR_8 = VAR_5->dp;


  VAR_6 = 0;


  for (VAR_10 = 0; VAR_10 < VAR_3->used; VAR_10++) {

    VAR_9 = ((mp_word) VAR_6) + ((mp_word)*VAR_7++) * ((mp_word)VAR_4);


    *VAR_8++ = (mp_digit) (VAR_9 & ((mp_word) VAR_1));


    VAR_6 = (mp_digit) (VAR_9 >> ((mp_word) VAR_0));
  }


  *VAR_8++ = VAR_6;


  while (VAR_10++ < VAR_12) {
     *VAR_8++ = 0;
  }


  VAR_5->used = VAR_3->used + 1;
  FUNC_0(VAR_5);

  return VAR_2;
}
