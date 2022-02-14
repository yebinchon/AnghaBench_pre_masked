
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_arg {int func; int * strm; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct sort_arg*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int *,char*,int **,int *,int *) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  strm_array VAR_5;
  strm_value* VAR_6;
  strm_int VAR_7;
  strm_value VAR_8;

  FUNC_4(VAR_1, VAR_2, VAR_3, "a|v", &VAR_6, &VAR_7, &VAR_8);

  VAR_5 = FUNC_1(VAR_6, VAR_7);
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_2 == 1) {
    FUNC_0(VAR_6, VAR_7, ((void*)0));
  }
  else {
    struct sort_arg VAR_9;

    VAR_9.strm = VAR_1;
    VAR_9.func = VAR_8;
    FUNC_0(VAR_6, VAR_7, &VAR_9);
  }
  *VAR_4 = FUNC_3(VAR_5);
  return VAR_0;
}
