
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stdev_data {double num; int s2; scalar_t__ s1; int func; } ;
typedef int strm_value ;
struct TYPE_4__ {struct stdev_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ) ;
 double FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_2, strm_value VAR_3)
{
  struct stdev_data* VAR_4 = VAR_2->data;
  double VAR_5;

  VAR_3 = FUNC_0(VAR_2, VAR_3, VAR_4->func);
  if (!FUNC_1(VAR_3)) {
    return VAR_0;
  }
  VAR_5 = FUNC_2(VAR_3);
  VAR_4->num++;
  VAR_5 -= VAR_4->s1;
  VAR_4->s1 += VAR_5/VAR_4->num;
  VAR_4->s2 += (VAR_4->num-1) * VAR_5 * VAR_5 / VAR_4->num;
  return VAR_1;
}
