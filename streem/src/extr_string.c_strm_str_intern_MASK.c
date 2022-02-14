
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_string ;
typedef int strm_int ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

strm_string
FUNC_4(const char* VAR_2, strm_int VAR_3)
{
  strm_string VAR_4;

  FUNC_0(VAR_2!=((void*)0));
  if (!VAR_0) {
    return FUNC_3(VAR_2, VAR_3, 0);
  }
  FUNC_1(&VAR_1);
  VAR_4 = FUNC_3(VAR_2, VAR_3, 0);
  FUNC_2(&VAR_1);

  return VAR_4;
}
