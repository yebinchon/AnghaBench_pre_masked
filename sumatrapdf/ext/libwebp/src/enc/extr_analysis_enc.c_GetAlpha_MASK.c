
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_value; int last_non_zero; } ;
typedef TYPE_1__ VP8Histogram ;


 int const VAR_0 ;

__attribute__((used)) static int FUNC_0(const VP8Histogram* const VAR_1) {



  const int VAR_2 = VAR_1->max_value;
  const int VAR_3 = VAR_1->last_non_zero;
  const int VAR_4 =
      (VAR_2 > 1) ? VAR_0 * VAR_3 / VAR_2 : 0;
  return VAR_4;
}
