
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_10__ {int used; int sign; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__*) ;

int
FUNC_3 (const mp_int * VAR_5, mp_int * VAR_6)
{
  int VAR_7;

if (VAR_5->used >= VAR_2) {
    VAR_7 = FUNC_1 (VAR_5, VAR_6);
  } else
  {

    if ((VAR_5->used * 2 + 1) < VAR_3 &&
         VAR_5->used <
         (1 << (sizeof(mp_word) * VAR_0 - 2*VAR_1 - 1))) {
      VAR_7 = FUNC_0 (VAR_5, VAR_6);
    } else
      VAR_7 = FUNC_2 (VAR_5, VAR_6);
  }
  VAR_6->sign = VAR_4;
  return VAR_7;
}
