
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int* dp; int used; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__ const*,int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8 (const mp_int * VAR_2, int VAR_3, mp_int * VAR_4, mp_int * VAR_5)
{
  mp_digit VAR_6, VAR_7, VAR_8;
  int VAR_9, VAR_10;
  mp_int VAR_11;



  if (VAR_3 <= 0) {
    VAR_10 = FUNC_2 (VAR_2, VAR_4);
    if (VAR_5 != ((void*)0)) {
      FUNC_7 (VAR_5);
    }
    return VAR_10;
  }

  if ((VAR_10 = FUNC_4 (&VAR_11)) != VAR_1) {
    return VAR_10;
  }


  if (VAR_5 != ((void*)0)) {
    if ((VAR_10 = FUNC_5 (VAR_2, VAR_3, &VAR_11)) != VAR_1) {
      FUNC_1 (&VAR_11);
      return VAR_10;
    }
  }


  if ((VAR_10 = FUNC_2 (VAR_2, VAR_4)) != VAR_1) {
    FUNC_1 (&VAR_11);
    return VAR_10;
  }


  if (VAR_3 >= VAR_0) {
    FUNC_6 (VAR_4, VAR_3 / VAR_0);
  }


  VAR_6 = (mp_digit) (VAR_3 % VAR_0);
  if (VAR_6 != 0) {
    register mp_digit *VAR_12, VAR_13, VAR_14;


    VAR_13 = (((mp_digit)1) << VAR_6) - 1;


    VAR_14 = VAR_0 - VAR_6;


    VAR_12 = VAR_4->dp + (VAR_4->used - 1);


    VAR_7 = 0;
    for (VAR_9 = VAR_4->used - 1; VAR_9 >= 0; VAR_9--) {

      VAR_8 = *VAR_12 & VAR_13;


      *VAR_12 = (*VAR_12 >> VAR_6) | (VAR_7 << VAR_14);
      --VAR_12;


      VAR_7 = VAR_8;
    }
  }
  FUNC_0 (VAR_4);
  if (VAR_5 != ((void*)0)) {
    FUNC_3 (&VAR_11, VAR_5);
  }
  FUNC_1 (&VAR_11);
  return VAR_1;
}
