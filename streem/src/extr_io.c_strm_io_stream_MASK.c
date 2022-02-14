
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_io ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;

strm_stream*
FUNC_5(strm_value VAR_0, int VAR_1)
{
  strm_io VAR_2;

  FUNC_0(FUNC_1(VAR_0));
  VAR_2 = FUNC_3(VAR_0);
  switch (VAR_1) {
  case 129:
    return FUNC_2(VAR_2);
  case 128:
    return FUNC_4(VAR_2);
 default:
   return ((void*)0);
  }
}
