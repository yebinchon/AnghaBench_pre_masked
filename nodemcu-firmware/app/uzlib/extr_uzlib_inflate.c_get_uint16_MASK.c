
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int (* get_byte ) () ;} ;
typedef TYPE_1__ UZLIB_DATA ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static uint16_t FUNC_2(UZLIB_DATA *VAR_0) {
  uint16_t VAR_1 = VAR_0->get_byte();
  return VAR_1 | (VAR_0->get_byte() << 8);
}
