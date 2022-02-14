
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;

int FUNC_0(double *VAR_2, double *VAR_3, long long VAR_4) {
  double VAR_5, VAR_6, VAR_7;
  double VAR_8, VAR_9;
  double *VAR_10, *VAR_11;
  int VAR_12 = 0;
  for (int VAR_13=0; VAR_13 < VAR_4; VAR_13++) {
    for (int VAR_14=0; VAR_14 < VAR_4; VAR_14++) {
      VAR_10 = VAR_2 + VAR_13*3;
      VAR_11 = VAR_2 + VAR_14*3;
      VAR_5 = VAR_10[0] * VAR_11[1] - VAR_10[1] * VAR_11[0];
      VAR_6 = VAR_10[2] * VAR_11[1] - VAR_10[1] * VAR_11[2];
      VAR_7 = VAR_10[0] * VAR_11[2] - VAR_10[2] * VAR_11[0];

      if ((VAR_5 != 0) && (VAR_10[0]*VAR_11[0]*VAR_10[1]*VAR_11[1] < 0) && (VAR_10[1]*VAR_11[1] < 0)){
        VAR_8 = VAR_6 / VAR_5;
        VAR_9 = VAR_7 / VAR_5;
        if ((0 < VAR_8) &&
            (VAR_8 < VAR_1) &&
            (0 < VAR_9) &&
            (VAR_9 < VAR_0)){
          VAR_3[VAR_12*2 + 0] = VAR_8;
          VAR_3[VAR_12*2 + 1] = VAR_9;
          VAR_12++;
        }
      }
    }
  }
  return VAR_12;
}
