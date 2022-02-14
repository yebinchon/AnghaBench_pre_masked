
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_string {char const* ptr; } ;
typedef int strm_string ;






 char const* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

const char*
FUNC_3(strm_string* VAR_0)
{
  switch (FUNC_1(*VAR_0)) {
  case 129:
    return FUNC_0(VAR_0)+1;
  case 131:
    return FUNC_0(VAR_0);
  case 128:
  case 130:
    {
      struct strm_string* VAR_1 = (struct strm_string*)FUNC_2(*VAR_0);
      return VAR_1->ptr;
    }
  default:
    return ((void*)0);
  }
}
