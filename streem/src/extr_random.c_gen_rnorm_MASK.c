
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rnorm_data {int dummy; } ;
typedef int strm_value ;
struct TYPE_5__ {struct rnorm_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 double FUNC_0 (struct rnorm_data*) ;
 int FUNC_1 (TYPE_1__*,int ,int (*) (TYPE_1__*,int )) ;
 int FUNC_2 (double) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct rnorm_data* VAR_3 = VAR_1->data;
  double VAR_4 = FUNC_0(VAR_3);

  FUNC_1(VAR_1, FUNC_2(VAR_4), FUNC_3);
  return VAR_0;
}
