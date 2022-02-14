
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int used; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*) ;

int FUNC_6 (mp_int * VAR_3, const mp_int * VAR_4)
{
  int VAR_5, VAR_6, VAR_7;


  VAR_6 = FUNC_2 (VAR_4) % VAR_0;


  if (VAR_4->used > 1) {
     if ((VAR_7 = FUNC_0 (VAR_3, (VAR_4->used - 1) * VAR_0 + VAR_6 - 1)) != VAR_2) {
        return VAR_7;
     }
  } else {
     FUNC_4(VAR_3, 1);
     VAR_6 = 1;
  }



  for (VAR_5 = VAR_6 - 1; VAR_5 < VAR_0; VAR_5++) {
    if ((VAR_7 = FUNC_3 (VAR_3, VAR_3)) != VAR_2) {
      return VAR_7;
    }
    if (FUNC_1 (VAR_3, VAR_4) != VAR_1) {
      if ((VAR_7 = FUNC_5 (VAR_3, VAR_4, VAR_3)) != VAR_2) {
        return VAR_7;
      }
    }
  }

  return VAR_2;
}
