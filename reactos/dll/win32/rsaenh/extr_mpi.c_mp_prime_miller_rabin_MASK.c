
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 scalar_t__ FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int,int const*,int *) ;
 int FUNC_5 (int const*,int const*,int const*,int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*,int const*) ;
 int FUNC_8 (int const*,int const*,int const*) ;
 int FUNC_9 (int const*,int,int const*) ;

__attribute__((used)) static int FUNC_10 (mp_int * VAR_6, const mp_int * VAR_7, int *VAR_8)
{
  mp_int VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13, VAR_14;


  *VAR_8 = VAR_2;


  if (FUNC_2(VAR_7, 1) != VAR_1) {
     return VAR_4;
  }


  if ((VAR_14 = FUNC_7 (&VAR_9, VAR_6)) != VAR_3) {
    return VAR_14;
  }
  if ((VAR_14 = FUNC_9 (&VAR_9, 1, &VAR_9)) != VAR_3) {
    goto __N1;
  }


  if ((VAR_14 = FUNC_7 (&VAR_11, &VAR_9)) != VAR_3) {
    goto __N1;
  }




  VAR_12 = FUNC_3(&VAR_11);


  if ((VAR_14 = FUNC_4 (&VAR_11, VAR_12, &VAR_11, ((void*)0))) != VAR_3) {
    goto __R;
  }


  if ((VAR_14 = FUNC_6 (&VAR_10)) != VAR_3) {
    goto __R;
  }
  if ((VAR_14 = FUNC_5 (VAR_7, &VAR_11, VAR_6, &VAR_10)) != VAR_3) {
    goto __Y;
  }


  if (FUNC_2 (&VAR_10, 1) != VAR_0 && FUNC_1 (&VAR_10, &VAR_9) != VAR_0) {
    VAR_13 = 1;

    while ((VAR_13 <= (VAR_12 - 1)) && FUNC_1 (&VAR_10, &VAR_9) != VAR_0) {
      if ((VAR_14 = FUNC_8 (&VAR_10, VAR_6, &VAR_10)) != VAR_3) {
         goto __Y;
      }


      if (FUNC_2 (&VAR_10, 1) == VAR_0) {
         goto __Y;
      }

      ++VAR_13;
    }


    if (FUNC_1 (&VAR_10, &VAR_9) != VAR_0) {
      goto __Y;
    }
  }


  *VAR_8 = VAR_5;
__Y:FUNC_0 (&VAR_10);
__R:FUNC_0 (&VAR_11);
__N1:FUNC_0 (&VAR_9);
  return VAR_14;
}
