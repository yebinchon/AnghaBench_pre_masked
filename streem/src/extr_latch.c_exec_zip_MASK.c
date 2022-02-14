
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_data {int len; int ** latch; scalar_t__ i; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 struct zip_data* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int * FUNC_2 () ;
 int VAR_1 ;
 int * FUNC_3 (int ,int ,int ,struct zip_data*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_4, int VAR_5, strm_value* VAR_6, strm_value* VAR_7)
{
  struct zip_data* VAR_8 = FUNC_0(sizeof(struct zip_data)+sizeof(strm_stream*)*VAR_5);
  strm_int VAR_9;
  strm_stream* VAR_10;

  VAR_8->i = 0;
  VAR_8->len = VAR_5;
  for (VAR_9=0; VAR_9<VAR_5; VAR_9++) {
    strm_value VAR_11;
    VAR_10 = FUNC_2();
    FUNC_1(VAR_4, VAR_6[VAR_9], FUNC_4(VAR_10), &VAR_11);
    VAR_8->latch[VAR_9] = VAR_10;
  }
  *VAR_7 = FUNC_4(FUNC_3(VAR_1, VAR_3, VAR_2, VAR_8));
  return VAR_0;
}
