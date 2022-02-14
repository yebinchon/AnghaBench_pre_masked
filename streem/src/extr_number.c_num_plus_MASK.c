
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,int *,char*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  strm_value VAR_6, VAR_7;

  FUNC_1(VAR_2, VAR_3, VAR_4, "NN", &VAR_6, &VAR_7);
  if (FUNC_2(VAR_6) && FUNC_2(VAR_7)) {
    *VAR_5 = FUNC_3(FUNC_6(VAR_6)+FUNC_6(VAR_7));
    return VAR_1;
  }
  if (FUNC_4(VAR_6) && FUNC_4(VAR_7)) {
    *VAR_5 = FUNC_0(FUNC_5(VAR_6)+FUNC_5(VAR_7));
    return VAR_1;
  }
  return VAR_0;
}
