
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(const mp_int *VAR_1, mp_digit *VAR_2)
{
   int VAR_3, VAR_4;
   mp_int VAR_5;

   if ((VAR_3 = FUNC_3(&VAR_5)) != VAR_0) {
      return VAR_3;
   }

   VAR_4 = FUNC_2(VAR_1);
   if ((VAR_3 = FUNC_0(&VAR_5, VAR_4)) != VAR_0) {
      FUNC_1(&VAR_5);
      return VAR_3;
   }

   if ((VAR_3 = FUNC_4(&VAR_5, VAR_1, &VAR_5)) != VAR_0) {
      FUNC_1(&VAR_5);
      return VAR_3;
   }

   *VAR_2 = VAR_5.dp[0];
   FUNC_1(&VAR_5);
   return VAR_0;
}
