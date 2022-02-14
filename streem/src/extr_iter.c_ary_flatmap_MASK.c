
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_array ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int *,char*,int *,int *) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  strm_array VAR_6;
  strm_value VAR_7;
  strm_array VAR_8;
  strm_value* VAR_9;

  FUNC_5(VAR_2, VAR_3, VAR_4, "Av", &VAR_6, &VAR_7);
  VAR_8 = FUNC_2(((void*)0), FUNC_0(VAR_6));
  VAR_9 = FUNC_3(VAR_8);
  if (FUNC_1(VAR_2, VAR_6, VAR_7, &VAR_9) == VAR_0) {
    return VAR_0;
  }
  *VAR_5 = FUNC_4(VAR_8);
  return VAR_1;
}
