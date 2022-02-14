
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int * pin; } ;
typedef TYPE_1__ pwm2_interrupt_handler_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline uint16_t FUNC_2(pwm2_interrupt_handler_data_t *VAR_1) {
  uint16_t VAR_2 = 0;
  for (int VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
    if (FUNC_1(VAR_1, VAR_3)) {
      FUNC_0(&VAR_1->pin[VAR_3], &VAR_2);
    }
  }
  return VAR_2;
}
