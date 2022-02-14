
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stdev_data {double s1; double s2; int mode; int func; scalar_t__ num; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef enum stdev_mode { ____Placeholder_stdev_mode } stdev_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stdev_data* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int *,char*,int *) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_6, int VAR_7, strm_value* VAR_8, strm_value* VAR_9, enum stdev_mode VAR_10)
{
  struct stdev_data* VAR_11;
  strm_value VAR_12;

  FUNC_1(VAR_6, VAR_7, VAR_8, "|v", &VAR_12);
  VAR_11 = FUNC_0(sizeof(struct stdev_data));
  if (!VAR_11) return VAR_0;
  VAR_11->num = 0;
  VAR_11->s1 = VAR_11->s2 = 0.0;
  VAR_11->mode = VAR_10;
  if (VAR_7 == 0) {
    *VAR_9 = FUNC_3(FUNC_2(VAR_5, VAR_2, VAR_4, (void*)VAR_11));
  }
  else {
    VAR_11->func = VAR_12;
    *VAR_9 = FUNC_3(FUNC_2(VAR_5, VAR_3, VAR_4, (void*)VAR_11));
  }
  return VAR_1;
}
