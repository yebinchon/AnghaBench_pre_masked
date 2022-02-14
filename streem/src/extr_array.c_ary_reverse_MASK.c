
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *,char*,int **,int*) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  strm_value* VAR_5;
  strm_value* VAR_6;
  strm_int VAR_7;
  strm_array VAR_8;
  strm_int VAR_9;

  FUNC_3(VAR_1, VAR_2, VAR_3, "a", &VAR_5, &VAR_7);
  VAR_8 = FUNC_0(((void*)0), VAR_7);
  VAR_6 = FUNC_1(VAR_8);
  for (VAR_9=0; VAR_9<VAR_7; VAR_9++) {
    VAR_6[VAR_7-VAR_9-1] = VAR_5[VAR_9];
  }
  *VAR_4 = FUNC_2(VAR_8);
  return VAR_0;
}
