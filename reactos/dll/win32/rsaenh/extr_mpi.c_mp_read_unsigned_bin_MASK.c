
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int alloc; int used; int * dp; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4 (mp_int * VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  int VAR_4;


  if (VAR_1->alloc < 2) {
     if ((VAR_4 = FUNC_1(VAR_1, 2)) != VAR_0) {
        return VAR_4;
     }
  }


  FUNC_3 (VAR_1);


  while (VAR_3-- > 0) {
    if ((VAR_4 = FUNC_2 (VAR_1, 8, VAR_1)) != VAR_0) {
      return VAR_4;
    }

    VAR_1->dp[0] |= *VAR_2++;
    VAR_1->used += 1;
  }
  FUNC_0 (VAR_1);
  return VAR_0;
}
