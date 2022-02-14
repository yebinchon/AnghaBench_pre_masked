
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int *,int*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6 (mp_int * VAR_7, int VAR_8, int *VAR_9)
{
  mp_int VAR_10;
  int VAR_11, VAR_12, VAR_13;


  *VAR_9 = VAR_1;


  if (VAR_8 <= 0 || VAR_8 > VAR_5) {
    return VAR_3;
  }


  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
      if (FUNC_1(VAR_7, VAR_6[VAR_11]) == VAR_0) {
         *VAR_9 = 1;
         return VAR_2;
      }
  }


  if ((VAR_12 = FUNC_3 (VAR_7, &VAR_13)) != VAR_2) {
    return VAR_12;
  }


  if (VAR_13 == VAR_4) {
    return VAR_2;
  }


  if ((VAR_12 = FUNC_2 (&VAR_10)) != VAR_2) {
    return VAR_12;
  }

  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {

    FUNC_5 (&VAR_10, VAR_6[VAR_11]);

    if ((VAR_12 = FUNC_4 (VAR_7, &VAR_10, &VAR_13)) != VAR_2) {
      goto __B;
    }

    if (VAR_13 == VAR_1) {
      goto __B;
    }
  }


  *VAR_9 = VAR_4;
__B:FUNC_0 (&VAR_10);
  return VAR_12;
}
