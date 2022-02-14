
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_14__ {int* dp; int used; int sign; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__ const*,int,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__ const*) ;
 scalar_t__ FUNC_7 (int,int*) ;

__attribute__((used)) static int FUNC_8 (const mp_int * VAR_3, mp_digit VAR_4, mp_int * VAR_5, mp_digit * VAR_6)
{
  mp_int VAR_7;
  mp_word VAR_8;
  mp_digit VAR_9;
  int VAR_10, VAR_11;


  if (VAR_4 == 0) {
     return VAR_2;
  }


  if (VAR_4 == 1 || FUNC_6(VAR_3) == 1) {
     if (VAR_6 != ((void*)0)) {
        *VAR_6 = 0;
     }
     if (VAR_5 != ((void*)0)) {
        return FUNC_2(VAR_3, VAR_5);
     }
     return VAR_1;
  }


  if (FUNC_7(VAR_4, &VAR_11)) {
     if (VAR_6 != ((void*)0)) {
        *VAR_6 = VAR_3->dp[0] & ((((mp_digit)1)<<VAR_11) - 1);
     }
     if (VAR_5 != ((void*)0)) {
        return FUNC_3(VAR_3, VAR_11, VAR_5, ((void*)0));
     }
     return VAR_1;
  }


  if ((VAR_10 = FUNC_5(&VAR_7, VAR_3->used)) != VAR_1) {
     return VAR_10;
  }

  VAR_7.used = VAR_3->used;
  VAR_7.sign = VAR_3->sign;
  VAR_8 = 0;
  for (VAR_11 = VAR_3->used - 1; VAR_11 >= 0; VAR_11--) {
     VAR_8 = (VAR_8 << ((mp_word)VAR_0)) | ((mp_word)VAR_3->dp[VAR_11]);

     if (VAR_8 >= VAR_4) {
        VAR_9 = (mp_digit)(VAR_8 / VAR_4);
        VAR_8 -= ((mp_word)VAR_9) * ((mp_word)VAR_4);
      } else {
        VAR_9 = 0;
      }
      VAR_7.dp[VAR_11] = VAR_9;
  }

  if (VAR_6 != ((void*)0)) {
     *VAR_6 = (mp_digit)VAR_8;
  }

  if (VAR_5 != ((void*)0)) {
     FUNC_0(&VAR_7);
     FUNC_4(&VAR_7, VAR_5);
  }
  FUNC_1(&VAR_7);

  return VAR_10;
}
