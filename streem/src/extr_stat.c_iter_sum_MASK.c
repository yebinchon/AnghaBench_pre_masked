
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sum_data {double sum; double c; int num; } ;
typedef int strm_value ;
struct TYPE_3__ {struct sum_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 double FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_2, strm_value VAR_3)
{
  struct sum_data* VAR_4 = VAR_2->data;
  double VAR_5, VAR_6;

  if (!FUNC_1(VAR_3)) {
    return VAR_0;
  }
  VAR_5 = FUNC_2(VAR_3);
  VAR_6 = VAR_4->sum + VAR_5;
  if (FUNC_0(VAR_4->sum) >= FUNC_0(VAR_5))
    VAR_4->c += ((VAR_4->sum - VAR_6) + VAR_5);
  else
    VAR_4->c += ((VAR_5 - VAR_6) + VAR_4->sum);
  VAR_4->sum = VAR_6;
  VAR_4->num++;
  return VAR_1;
}
