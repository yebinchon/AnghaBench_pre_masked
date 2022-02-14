
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_11__ {int used; int alloc; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4 (mp_int * VAR_5, const mp_int * VAR_6, mp_digit VAR_7)
{
  int VAR_8, VAR_9, VAR_10;
  mp_word VAR_11[VAR_4];


  VAR_10 = VAR_5->used;


  if (VAR_5->alloc < VAR_6->used + 1) {
    if ((VAR_9 = FUNC_2 (VAR_5, VAR_6->used + 1)) != VAR_3) {
      return VAR_9;
    }
  }




  {
    register mp_word *VAR_12;
    register mp_digit *VAR_13;


    VAR_12 = VAR_11;


    VAR_13 = VAR_5->dp;


    for (VAR_8 = 0; VAR_8 < VAR_5->used; VAR_8++) {
      *VAR_12++ = *VAR_13++;
    }


    for (; VAR_8 < VAR_6->used * 2 + 1; VAR_8++) {
      *VAR_12++ = 0;
    }
  }




  for (VAR_8 = 0; VAR_8 < VAR_6->used; VAR_8++) {






    register mp_digit VAR_14;
    VAR_14 = (mp_digit) (((VAR_11[VAR_8] & VAR_2) * VAR_7) & VAR_2);
    {
      register int VAR_15;
      register mp_digit *VAR_16;
      register mp_word *VAR_17;


      VAR_16 = VAR_6->dp;


      VAR_17 = VAR_11 + VAR_8;


      for (VAR_15 = 0; VAR_15 < VAR_6->used; VAR_15++) {
          *VAR_17++ += ((mp_word)VAR_14) * ((mp_word)*VAR_16++);
      }
    }


    VAR_11[VAR_8 + 1] += VAR_11[VAR_8] >> ((mp_word) VAR_0);
  }





  {
    register mp_digit *VAR_18;
    register mp_word *VAR_19, *VAR_20;




    VAR_20 = VAR_11 + VAR_8;


    VAR_19 = VAR_11 + ++VAR_8;

    for (; VAR_8 <= VAR_6->used * 2 + 1; VAR_8++) {
      *VAR_19++ += *VAR_20++ >> ((mp_word) VAR_0);
    }
    VAR_18 = VAR_5->dp;


    VAR_19 = VAR_11 + VAR_6->used;

    for (VAR_8 = 0; VAR_8 < VAR_6->used + 1; VAR_8++) {
      *VAR_18++ = (mp_digit)(*VAR_19++ & ((mp_word) VAR_2));
    }




    for (; VAR_8 < VAR_10; VAR_8++) {
      *VAR_18++ = 0;
    }
  }


  VAR_5->used = VAR_6->used + 1;
  FUNC_0 (VAR_5);


  if (FUNC_1 (VAR_5, VAR_6) != VAR_1) {
    return FUNC_3 (VAR_5, VAR_6, VAR_5);
  }
  return VAR_3;
}
