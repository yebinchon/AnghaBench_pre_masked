
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,size_t) ;
 int FUNC_1 (int *,int,int *,char*,int *,int *) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  strm_string VAR_5, VAR_6, VAR_7;
  char *VAR_8;

  FUNC_1(VAR_1, VAR_2, VAR_3, "SS", &VAR_5, &VAR_6);
  VAR_7 = FUNC_3(((void*)0), FUNC_2(VAR_5) + FUNC_2(VAR_6));

  VAR_8 = (char*)FUNC_4(VAR_7);
  FUNC_0(VAR_8, FUNC_4(VAR_5), FUNC_2(VAR_5));
  FUNC_0(VAR_8+FUNC_2(VAR_5), FUNC_4(VAR_6), FUNC_2(VAR_6));
  VAR_8[FUNC_2(VAR_7)] = '\0';
  *VAR_4 = FUNC_5(VAR_7);
  return VAR_0;
}
