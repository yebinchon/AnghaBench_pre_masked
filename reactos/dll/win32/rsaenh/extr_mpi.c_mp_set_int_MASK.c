
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned long* dp; int used; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3 (mp_int * VAR_1, unsigned long VAR_2)
{
  int VAR_3, VAR_4;

  FUNC_2 (VAR_1);


  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {

    if ((VAR_4 = FUNC_1 (VAR_1, 4, VAR_1)) != VAR_0) {
      return VAR_4;
    }


    VAR_1->dp[0] |= (VAR_2 >> 28) & 15;


    VAR_2 <<= 4;


    VAR_1->used += 1;
  }
  FUNC_0 (VAR_1);
  return VAR_0;
}
