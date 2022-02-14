
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int,int *,int *) ;
 int FUNC_5 (int *,int,int *,char*,int **,int*,int *) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  strm_value* VAR_6;
  strm_value* VAR_7;
  strm_int VAR_8;
  strm_value VAR_9;
  strm_int VAR_10;

  FUNC_5(VAR_2, VAR_3, VAR_4, "a|v", &VAR_7, &VAR_8, &VAR_9);

  if (VAR_8 == 0) {
    FUNC_6(VAR_2, "empty array");
    return VAR_0;
  }
  VAR_6 = FUNC_1(sizeof(strm_value)*VAR_8);
  if (!VAR_6) return VAR_0;
  if (VAR_3 == 1) {
    FUNC_2(VAR_6, VAR_7, sizeof(strm_value)*VAR_8);
  }
  else {
    strm_value VAR_11 = VAR_4[1];

    for (VAR_10=0; VAR_10<VAR_8; VAR_10++) {
      if (FUNC_4(VAR_2, VAR_11, 1, &VAR_7[VAR_10], &VAR_6[VAR_10]) == VAR_0) {
        FUNC_0(VAR_6);
        return VAR_0;
      }
    }
  }
  *VAR_5 = FUNC_3(VAR_6, VAR_8);
  FUNC_0(VAR_6);
  return VAR_1;
}
