
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int bit_generator; } ;
typedef TYPE_1__ aug_bitgen_t ;


 double FUNC_0 (TYPE_1__*,double,int) ;
 int FUNC_1 (int ,double) ;

int64_t FUNC_2(aug_bitgen_t *VAR_0, double VAR_1, double VAR_2) {
  double VAR_3 = FUNC_0(VAR_0, VAR_1, (1 - VAR_2) / VAR_2);
  return (int64_t)FUNC_1(VAR_0->bit_generator, VAR_3);
}
