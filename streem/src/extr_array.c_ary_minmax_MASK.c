
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int,int *,int *) ;
 int FUNC_1 (int *,int,int *,char*,int **,int*,int *) ;
 int FUNC_2 () ;
 double FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5, int VAR_6)
{
  strm_value VAR_7 = FUNC_2();
  int VAR_8, VAR_9;
  strm_value* VAR_10;
  strm_value VAR_11, VAR_12;
  double VAR_13, VAR_14;

  FUNC_1(VAR_2, VAR_3, VAR_4, "a|v", &VAR_10, &VAR_9, &VAR_7);
  if (VAR_9 == 0) {
    *VAR_5 = FUNC_2();
    return VAR_1;
  }
  VAR_12 = VAR_10[0];
  if (VAR_3 == 2) {
    if (FUNC_0(VAR_2, VAR_7, 1, &VAR_10[0], &VAR_11) == VAR_0) {
      return VAR_0;
    }
  }
  else {
    VAR_11 = VAR_10[0];
  }
  VAR_13 = FUNC_3(VAR_11);
  for (VAR_8=1; VAR_8<VAR_9; VAR_8++) {
    if (VAR_3 == 2) {
      if (FUNC_0(VAR_2, VAR_7, 1, &VAR_10[VAR_8], &VAR_11) == VAR_0) {
        return VAR_0;
      }
    }
    else {
      VAR_11 = VAR_10[0];
    }
    VAR_14 = FUNC_3(VAR_11);
    if (VAR_6) {
      if (VAR_13 > VAR_14) {
        VAR_13 = VAR_14;
        VAR_12 = VAR_10[VAR_8];
      }
    }
    else {
      if (VAR_13 < VAR_14) {
        VAR_13 = VAR_14;
        VAR_12 = VAR_10[VAR_8];
      }
    }
  }
  *VAR_5 = VAR_12;
  return VAR_1;
}
