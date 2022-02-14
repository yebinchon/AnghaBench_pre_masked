
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 double FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (double) ;
 int FUNC_5 (int *,int,int *,char*,int **,int*) ;
 double FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  strm_value* VAR_5;
  int VAR_6, VAR_7;
  double VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  FUNC_5(VAR_1, VAR_2, VAR_3, "a", &VAR_5, &VAR_7);
  VAR_8 = VAR_9 = VAR_10 = VAR_11 = VAR_12 = 0;
  for (VAR_6=0; VAR_6<VAR_7; VAR_6++) {
    strm_value VAR_13 = VAR_5[VAR_6];
    strm_value* VAR_14;
    double VAR_15, VAR_16;

    if (!FUNC_1(VAR_13) || FUNC_2(VAR_13) != 2) {

      continue;
    }
    VAR_14 = FUNC_3(VAR_13);
    VAR_15 = FUNC_6(VAR_14[0]) - VAR_8; VAR_8 += VAR_15 / (VAR_6+1);
    VAR_16 = FUNC_6(VAR_14[1]) - VAR_9; VAR_9 += VAR_16 / (VAR_6+1);
    VAR_10 += VAR_6 * VAR_15 * VAR_15 / (VAR_6+1);
    VAR_11 += VAR_6 * VAR_16 * VAR_16 / (VAR_6+1);
    VAR_12 += VAR_6 * VAR_15 * VAR_16 / (VAR_6+1);
  }
  VAR_10 = FUNC_0(VAR_10 / (VAR_7-1));
  VAR_11 = FUNC_0(VAR_11 / (VAR_7-1));
  VAR_12 /= (VAR_7-1) * VAR_10 * VAR_11;
  *VAR_4 = FUNC_4(VAR_12);
  return VAR_0;
}
