
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *,char*,int *,int*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  strm_value VAR_6;
  strm_int VAR_7;

  FUNC_3(VAR_2, VAR_3, VAR_4, "Ni", &VAR_6, &VAR_7);
  if (FUNC_4(VAR_6)) {
    *VAR_5 = FUNC_5(FUNC_7(VAR_6)%VAR_7);
    return VAR_1;
  }
  if (FUNC_1(VAR_6)) {
    *VAR_5 = FUNC_2(FUNC_0(FUNC_6(VAR_6), VAR_7));
    return VAR_1;
  }
  return VAR_0;
}
