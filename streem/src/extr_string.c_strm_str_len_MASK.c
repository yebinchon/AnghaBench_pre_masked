
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_string {int len; } ;
typedef int strm_string ;
typedef int strm_int ;






 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

strm_int
FUNC_3(strm_string VAR_0)
{
  switch (FUNC_1(VAR_0)) {
  case 129:
    return (strm_int)FUNC_0(VAR_0)[0];
  case 131:
    return 6;
  case 128:
  case 130:
    {
      struct strm_string* VAR_1 = (struct strm_string*)FUNC_2(VAR_0);

      return VAR_1->len;
    }
  default:
    return 0;
  }
}
