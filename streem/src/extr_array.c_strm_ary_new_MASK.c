
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_array {int* ptr; int len; int headers; int * ns; } ;
typedef int strm_value ;
typedef int strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 intptr_t VAR_1 ;
 struct strm_array* FUNC_0 (int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_2 ;

strm_array
FUNC_3(const strm_value* VAR_3, strm_int VAR_4)
{
  struct strm_array* VAR_5;
  strm_value *VAR_6;

  VAR_5 = FUNC_0(sizeof(struct strm_array)+sizeof(strm_value)*VAR_4);
  VAR_6 = (strm_value*)&VAR_5[1];

  if (VAR_3) {
    FUNC_1(VAR_6, VAR_3, sizeof(strm_value)*VAR_4);
  }
  else {
    FUNC_2(VAR_6, 0, sizeof(strm_value)*VAR_4);
  }
  VAR_5->ptr = VAR_6;
  VAR_5->len = VAR_4;
  VAR_5->ns = ((void*)0);
  VAR_5->headers = VAR_2;
  return VAR_0 | (strm_value)((intptr_t)VAR_5 & VAR_1);
}
