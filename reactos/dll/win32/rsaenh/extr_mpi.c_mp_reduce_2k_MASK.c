
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;
typedef int mp_digit ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int const*,int *) ;

int
FUNC_8(mp_int *VAR_2, const mp_int *VAR_3, mp_digit VAR_4)
{
   mp_int VAR_5;
   int VAR_6, VAR_7;

   if ((VAR_7 = FUNC_4(&VAR_5)) != VAR_1) {
      return VAR_7;
   }

   VAR_6 = FUNC_2(VAR_3);
top:

   if ((VAR_7 = FUNC_3(VAR_2, VAR_6, &VAR_5, VAR_2)) != VAR_1) {
      goto ERR;
   }

   if (VAR_4 != 1) {

      if ((VAR_7 = FUNC_5(&VAR_5, VAR_4, &VAR_5)) != VAR_1) {
         goto ERR;
      }
   }


   if ((VAR_7 = FUNC_6(VAR_2, &VAR_5, VAR_2)) != VAR_1) {
      goto ERR;
   }

   if (FUNC_1(VAR_2, VAR_3) != VAR_0) {
      FUNC_7(VAR_2, VAR_3, VAR_2);
      goto top;
   }

ERR:
   FUNC_0(&VAR_5);
   return VAR_7;
}
