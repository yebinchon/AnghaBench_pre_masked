
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_13__ {scalar_t__ used; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef scalar_t__ mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (const mp_int * VAR_5, const mp_int * VAR_6, mp_int * VAR_7, int VAR_8)
{
  mp_int VAR_9;
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  mp_digit VAR_15;
  mp_word VAR_16;
  mp_digit VAR_17, *VAR_18, *VAR_19;


  if (((VAR_5->used + VAR_6->used + 1) < VAR_4)
      && FUNC_0 (VAR_5->used, VAR_6->used) < (1 << ((VAR_0 * sizeof (mp_word)) - (2 * VAR_1)))) {
    return FUNC_1 (VAR_5, VAR_6, VAR_7, VAR_8);
  }

  if ((VAR_10 = FUNC_5 (&VAR_9, VAR_5->used + VAR_6->used + 1)) != VAR_3) {
    return VAR_10;
  }
  VAR_9.used = VAR_5->used + VAR_6->used + 1;

  VAR_11 = VAR_5->used;
  VAR_12 = VAR_6->used;
  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {

    VAR_15 = 0;


    VAR_17 = VAR_5->dp[VAR_13];


    VAR_18 = &(VAR_9.dp[VAR_8]);


    VAR_19 = VAR_6->dp + (VAR_8 - VAR_13);

    for (VAR_14 = VAR_8 - VAR_13; VAR_14 < VAR_12; VAR_14++) {

      VAR_16 = ((mp_word)*VAR_18) +
                ((mp_word)VAR_17) * ((mp_word)*VAR_19++) +
                ((mp_word) VAR_15);


      *VAR_18++ = (mp_digit) (VAR_16 & ((mp_word) VAR_2));


      VAR_15 = (mp_digit) (VAR_16 >> ((mp_word) VAR_1));
    }
    *VAR_18 = VAR_15;
  }
  FUNC_2 (&VAR_9);
  FUNC_4 (&VAR_9, VAR_7);
  FUNC_3 (&VAR_9);
  return VAR_3;
}
