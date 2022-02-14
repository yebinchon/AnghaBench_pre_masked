
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_string {char const* ptr; } ;
typedef int strm_string ;
typedef size_t strm_int ;






 size_t* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

const char*
FUNC_4(strm_string VAR_0, char VAR_1[])
{
  strm_int VAR_2;

  switch (FUNC_2(VAR_0)) {
  case 129:
    VAR_2 = FUNC_0(VAR_0)[0];
    FUNC_1(VAR_1, FUNC_0(VAR_0)+1, VAR_2);
    VAR_1[VAR_2] = '\0';
    return VAR_1;
  case 131:
    FUNC_1(VAR_1, FUNC_0(VAR_0), 6);
    VAR_1[6] = '\0';
    return VAR_1;
  case 128:
  case 130:
    {
      struct strm_string* VAR_3 = (struct strm_string*)FUNC_3(VAR_0);
      return VAR_3->ptr;
    }
  default:
    return ((void*)0);
  }
}
