
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_14__ {int used; int alloc; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*) ;

int
FUNC_6 (mp_int * VAR_6, const mp_int * VAR_7, mp_digit VAR_8)
{
  int VAR_9, VAR_10, VAR_11;
  mp_digit VAR_12;







  VAR_11 = VAR_7->used * 2 + 1;
  if ((VAR_11 < VAR_5) &&
      VAR_7->used <
      (1 << ((VAR_0 * sizeof (mp_word)) - (2 * VAR_1)))) {
    return FUNC_0 (VAR_6, VAR_7, VAR_8);
  }


  if (VAR_6->alloc < VAR_11) {
    if ((VAR_10 = FUNC_3 (VAR_6, VAR_11)) != VAR_4) {
      return VAR_10;
    }
  }
  VAR_6->used = VAR_11;

  for (VAR_9 = 0; VAR_9 < VAR_7->used; VAR_9++) {
    VAR_12 = (mp_digit) (((mp_word)VAR_6->dp[VAR_9]) * ((mp_word)VAR_8) & VAR_3);


    {
      register int VAR_13;
      register mp_digit *VAR_14, *VAR_15, VAR_16;
      register mp_word VAR_17;


      VAR_14 = VAR_7->dp;


      VAR_15 = VAR_6->dp + VAR_9;


      VAR_16 = 0;


      for (VAR_13 = 0; VAR_13 < VAR_7->used; VAR_13++) {

        VAR_17 = ((mp_word)VAR_12) * ((mp_word)*VAR_14++) +
                  ((mp_word) VAR_16) + ((mp_word) * VAR_15);


        VAR_16 = (mp_digit)(VAR_17 >> ((mp_word) VAR_1));


        *VAR_15++ = (mp_digit)(VAR_17 & ((mp_word) VAR_3));
      }




      while (VAR_16) {
        *VAR_15 += VAR_16;
        VAR_16 = *VAR_15 >> VAR_1;
        *VAR_15++ &= VAR_3;
      }
    }
  }
  FUNC_1(VAR_6);
  FUNC_4 (VAR_6, VAR_7->used);


  if (FUNC_2 (VAR_6, VAR_7) != VAR_2) {
    return FUNC_5 (VAR_6, VAR_7, VAR_6);
  }

  return VAR_4;
}
