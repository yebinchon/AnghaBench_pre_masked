
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int IDR; } ;
typedef TYPE_1__ GPIO_TypeDef ;
typedef scalar_t__ GPIO_PinState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(GPIO_TypeDef* VAR_2, uint16_t VAR_3)
{
    GPIO_PinState VAR_4;
      if((VAR_2->IDR & VAR_3) != (uint32_t)VAR_0)
            {
                    VAR_4 = VAR_1;
                      }
        else
              {
                      VAR_4 = VAR_0;
                        }
          return (VAR_4==VAR_0);
}
