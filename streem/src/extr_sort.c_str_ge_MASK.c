
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int *,char*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  strm_value VAR_5, VAR_6;
  int VAR_7;

  FUNC_2(VAR_1, VAR_2, VAR_3, "SS", &VAR_5, &VAR_6);
  VAR_7 = FUNC_0(VAR_5, VAR_6);
  *VAR_4 = FUNC_1(VAR_7 >= 0);
  return VAR_0;
}
