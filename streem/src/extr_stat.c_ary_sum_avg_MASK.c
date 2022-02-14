
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (double) ;
 int FUNC_3 (int *,int,int *,char*,int **,int*,int *) ;
 int FUNC_4 (int ) ;
 double FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5, int VAR_6)
{
  int VAR_7, VAR_8;
  strm_value* VAR_9;
  double VAR_10 = 0;
  double VAR_11 = 0;
  strm_value VAR_12;

  FUNC_3(VAR_2, VAR_3, VAR_4, "a|v", &VAR_9, &VAR_8, &VAR_12);
  if (VAR_3 == 1) {
    for (VAR_7=0; VAR_7<VAR_8; VAR_7++) {
      double VAR_13, VAR_14;

      if (!FUNC_4(VAR_9[VAR_7])) {
        return VAR_0;
      }
      VAR_13 = FUNC_5(VAR_9[VAR_7]);
      VAR_14 = VAR_10 + VAR_13;
      if (FUNC_1(VAR_10) >= FUNC_1(VAR_13))
        VAR_11 += ((VAR_10 - VAR_14) + VAR_13);
      else
        VAR_11 += ((VAR_13 - VAR_14) + VAR_10);
      VAR_10 = VAR_14;
    }
  }
  else {
    for (VAR_7=0; VAR_7<VAR_8; VAR_7++) {
      strm_value VAR_15;
      double VAR_16, VAR_17;

      VAR_15 = FUNC_0(VAR_2, VAR_9[VAR_7], VAR_12);
      if (!FUNC_4(VAR_15)) {
        return VAR_0;
      }
      VAR_16 = FUNC_5(VAR_15);
      VAR_17 = VAR_10 + VAR_16;
      if (FUNC_1(VAR_10) >= FUNC_1(VAR_16))
        VAR_11 += ((VAR_10 - VAR_17) + VAR_16);
      else
        VAR_11 += ((VAR_16 - VAR_17) + VAR_10);
      VAR_10 = VAR_17;
    }
  }
  VAR_10 += VAR_11;
  if (VAR_6) {
    *VAR_5 = FUNC_2(VAR_10/VAR_8);
  }
  else {
    *VAR_5 = FUNC_2(VAR_10);
  }
  return VAR_1;
}
