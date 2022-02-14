
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 double FUNC_1 (double) ;
 int FUNC_2 (double) ;
 int FUNC_3 (int *,int,int *,char*,int **,int*,int *) ;
 int FUNC_4 (int ) ;
 double FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5, int VAR_6)
{
  strm_value VAR_7;
  strm_value* VAR_8;
  int VAR_9, VAR_10;
  double VAR_11, VAR_12;

  FUNC_3(VAR_2, VAR_3, VAR_4, "a|v", &VAR_8, &VAR_10, &VAR_7);

  VAR_11 = VAR_12 = 0.0;
  if (VAR_3 == 0) {
    for (VAR_9=0; VAR_9<VAR_10; VAR_9++) {
      double VAR_13 = FUNC_5(VAR_8[VAR_9]);
      VAR_13 -= VAR_11;
      VAR_11 += VAR_13/(VAR_9+1);
      VAR_12 += VAR_9 * VAR_13 * VAR_13 / (VAR_9+1);
    }
  }
  else {
    for (VAR_9=0; VAR_9<VAR_10; VAR_9++) {
      strm_value VAR_14;
      double VAR_15;

      VAR_14 = FUNC_0(VAR_2, VAR_8[VAR_9], VAR_7);
      if (!FUNC_4(VAR_14)) {
        return VAR_0;
      }
      VAR_15 = FUNC_5(VAR_14);
      VAR_15 -= VAR_11;
      VAR_11 += VAR_15/(VAR_9+1);
      VAR_12 += VAR_9 * VAR_15 * VAR_15 / (VAR_9+1);
    }
  }
  VAR_12 = VAR_12 / (VAR_9-1);
  if (VAR_6) {
    VAR_12 = FUNC_1(VAR_12);
  }
  *VAR_5 = FUNC_2(VAR_12);
  return VAR_1;
}
