
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sortby_value {int o; int v; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sortby_value*) ;
 struct sortby_value* FUNC_1 (int) ;
 int FUNC_2 (struct sortby_value*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int,int *,int *) ;
 int FUNC_7 (int *,int,int *,char*,int **,int*,int *) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  struct sortby_value* VAR_7;
  strm_value* VAR_8;
  strm_int VAR_9;
  strm_value VAR_10;
  strm_array VAR_11;
  strm_int VAR_12;

  FUNC_7(VAR_3, VAR_4, VAR_5, "av", &VAR_8, &VAR_9, &VAR_10);

  VAR_7 = FUNC_1(sizeof(struct sortby_value)*VAR_9);
  if (!VAR_7) return VAR_0;
  for (VAR_12=0; VAR_12<VAR_9; VAR_12++) {
    VAR_7[VAR_12].o = VAR_8[VAR_12];
    if (FUNC_6(VAR_3, VAR_10, 1, &VAR_8[VAR_12], &VAR_7[VAR_12].v) == VAR_0) {
      FUNC_0(VAR_7);
      return VAR_0;;
    }
  }
  FUNC_2(VAR_7, VAR_9, sizeof(struct sortby_value), VAR_2);
  VAR_11 = FUNC_3(((void*)0), VAR_9);
  VAR_8 = FUNC_4(VAR_11);
  for (VAR_12=0; VAR_12<VAR_9; VAR_12++) {
    VAR_8[VAR_12] = VAR_7[VAR_12].o;
  }
  FUNC_0(VAR_7);
  *VAR_6 = FUNC_5(VAR_11);
  return VAR_1;
}
