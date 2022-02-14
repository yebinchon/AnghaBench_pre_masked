
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct concat_data {int len; int ** latch; scalar_t__ i; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 struct concat_data* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int * FUNC_2 () ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ,int *,struct concat_data*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  struct concat_data* VAR_7 = FUNC_0(sizeof(struct concat_data)+sizeof(strm_stream*)*VAR_4);
  strm_int VAR_8;
  strm_stream* VAR_9;

  VAR_7->i = 0;
  VAR_7->len = VAR_4;
  for (VAR_8=0; VAR_8<VAR_4; VAR_8++) {
    strm_value VAR_10;
    VAR_9 = FUNC_2();
    FUNC_1(VAR_3, VAR_5[VAR_8], FUNC_4(VAR_9), &VAR_10);
    VAR_7->latch[VAR_8] = VAR_9;
  }
  *VAR_6 = FUNC_4(FUNC_3(VAR_2, VAR_1, ((void*)0), VAR_7));
  return VAR_0;
}
