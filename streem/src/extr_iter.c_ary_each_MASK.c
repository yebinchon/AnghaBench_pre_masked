
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef size_t strm_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int,int *,int *) ;
 int FUNC_2 (int *,int,int *,char*,int **,size_t*,int *) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  strm_value* VAR_6;
  strm_int VAR_7;
  strm_value VAR_8;
  strm_int VAR_9;
  strm_value VAR_10;

  FUNC_2(VAR_2, VAR_3, VAR_4, "av", &VAR_6, &VAR_7, &VAR_8);

  for (VAR_9=0; VAR_9<VAR_7; VAR_9++) {
    if (FUNC_1(VAR_2, VAR_8, 1, &VAR_6[VAR_9], &VAR_10) == VAR_0) {
      return VAR_0;
    }
  }
  *VAR_5 = FUNC_0(VAR_4[0]);
  return VAR_1;
}
