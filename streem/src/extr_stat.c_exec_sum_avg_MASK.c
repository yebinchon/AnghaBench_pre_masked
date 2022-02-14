
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sum_data {int func; scalar_t__ num; scalar_t__ c; scalar_t__ sum; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sum_data* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int *,char*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,void*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_7, int VAR_8, strm_value* VAR_9, strm_value* VAR_10, int VAR_11)
{
  struct sum_data* VAR_12;
  strm_value VAR_13;

  FUNC_1(VAR_7, VAR_8, VAR_9, "|v", &VAR_13);
  VAR_12 = FUNC_0(sizeof(struct sum_data));
  if (!VAR_12) return VAR_0;
  VAR_12->sum = 0;
  VAR_12->c = 0;
  VAR_12->num = 0;
  if (VAR_8 == 0) {
    VAR_12->func = FUNC_2();
    *VAR_10 = FUNC_4(FUNC_3(VAR_5, VAR_3,
                                             VAR_11 ? VAR_2 : VAR_6, (void*)VAR_12));
  }
  else {
    VAR_12->func = VAR_13;
    *VAR_10 = FUNC_4(FUNC_3(VAR_5, VAR_4,
                                             VAR_11 ? VAR_2 : VAR_6, (void*)VAR_12));
  }
  return VAR_1;
}
