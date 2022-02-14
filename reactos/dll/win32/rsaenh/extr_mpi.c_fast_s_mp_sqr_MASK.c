
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_6__ {int used; int alloc; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3 (const mp_int * VAR_4, mp_int * VAR_5)
{
  int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  mp_digit VAR_11[VAR_3], *VAR_12;
  mp_word VAR_13;


  VAR_8 = VAR_4->used + VAR_4->used;
  if (VAR_5->alloc < VAR_8) {
    if ((VAR_7 = FUNC_2 (VAR_5, VAR_8)) != VAR_2) {
      return VAR_7;
    }
  }


  VAR_13 = 0;
  for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++) {
      int VAR_14, VAR_15, VAR_16;
      mp_word VAR_17;
      mp_digit *VAR_18;


      VAR_17 = 0;


      VAR_15 = FUNC_0(VAR_4->used-1, VAR_9);
      VAR_14 = VAR_9 - VAR_15;


      VAR_12 = VAR_4->dp + VAR_14;
      VAR_18 = VAR_4->dp + VAR_15;




      VAR_16 = FUNC_0(VAR_4->used-VAR_14, VAR_15+1);





      VAR_16 = FUNC_0(VAR_16, (VAR_15-VAR_14+1)>>1);


      for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
         VAR_17 += ((mp_word)*VAR_12++)*((mp_word)*VAR_18--);
      }


      VAR_17 = VAR_17 + VAR_17 + VAR_13;


      if ((VAR_9&1) == 0) {
         VAR_17 += ((mp_word)VAR_4->dp[VAR_9>>1])*((mp_word)VAR_4->dp[VAR_9>>1]);
      }


      VAR_11[VAR_9] = VAR_17;


      VAR_13 = VAR_17 >> ((mp_word)VAR_0);
  }


  VAR_6 = VAR_5->used;
  VAR_5->used = VAR_4->used+VAR_4->used;

  {
    mp_digit *VAR_19;
    VAR_19 = VAR_5->dp;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
      *VAR_19++ = VAR_11[VAR_9] & VAR_1;
    }


    for (; VAR_9 < VAR_6; VAR_9++) {
      *VAR_19++ = 0;
    }
  }
  FUNC_1 (VAR_5);
  return VAR_2;
}
