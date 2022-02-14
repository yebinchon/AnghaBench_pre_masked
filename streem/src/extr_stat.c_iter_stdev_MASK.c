
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stdev_data {double num; int s2; scalar_t__ s1; } ;
typedef int strm_value ;
struct TYPE_3__ {struct stdev_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 double FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_1, strm_value VAR_2)
{
  struct stdev_data* VAR_3 = VAR_1->data;
  double VAR_4 = FUNC_0(VAR_2);

  VAR_3->num++;
  VAR_4 -= VAR_3->s1;
  VAR_3->s1 += VAR_4/VAR_3->num;
  VAR_3->s2 += (VAR_3->num-1) * VAR_4 * VAR_4 / VAR_3->num;
  return VAR_0;
}
