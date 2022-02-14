
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_string ;
typedef scalar_t__ strm_int ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_value VAR_0, strm_value VAR_1)
{
  strm_string VAR_2 = FUNC_3(VAR_0);
  strm_string VAR_3 = FUNC_3(VAR_1);
  strm_int VAR_4 = FUNC_1(VAR_2);
  strm_int VAR_5 = FUNC_1(VAR_3);
  strm_int VAR_6, VAR_7;

  if (VAR_4 > VAR_5) {
    VAR_6 = VAR_5;
  }
  else {
    VAR_6 = VAR_4;
  }
  VAR_7 = FUNC_0(FUNC_2(VAR_2), FUNC_2(VAR_3), VAR_6);
  if (VAR_7 == 0) {
    if (VAR_4 > VAR_6) return 1;
    if (VAR_5 > VAR_6) return -1;
  }
  return VAR_7;
}
