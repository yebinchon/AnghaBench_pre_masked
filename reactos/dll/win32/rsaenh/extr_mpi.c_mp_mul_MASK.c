
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_14__ {scalar_t__ sign; int used; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*) ;

int FUNC_4 (const mp_int * VAR_6, const mp_int * VAR_7, mp_int * VAR_8)
{
  int VAR_9, VAR_10;
  VAR_10 = (VAR_6->sign == VAR_7->sign) ? VAR_5 : VAR_3;


  if (FUNC_0 (VAR_6->used, VAR_7->used) >= VAR_2) {
    VAR_9 = FUNC_2 (VAR_6, VAR_7, VAR_8);
  } else
  {






    int VAR_11 = VAR_6->used + VAR_7->used + 1;

    if ((VAR_11 < VAR_4) &&
        FUNC_0(VAR_6->used, VAR_7->used) <=
        (1 << ((VAR_0 * sizeof (mp_word)) - (2 * VAR_1)))) {
      VAR_9 = FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_11);
    } else
      VAR_9 = FUNC_3 (VAR_6, VAR_7, VAR_8);
  }
  VAR_8->sign = (VAR_8->used > 0) ? VAR_10 : VAR_5;
  return VAR_9;
}
