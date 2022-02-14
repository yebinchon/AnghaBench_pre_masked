
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int,int *,char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  strm_value VAR_7;

  FUNC_1(VAR_3, VAR_4, VAR_5, "S", &VAR_7);
  VAR_7 = FUNC_0(FUNC_5(VAR_7), FUNC_4(VAR_7), VAR_2);
  if (!FUNC_2(VAR_7)) {
    FUNC_3(VAR_3, "invalid string for number");
    return VAR_0;
  }
  *VAR_6 = VAR_7;
  return VAR_1;
}
