
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int const* FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int const* VAR_2 ;



 int FUNC_2 (int) ;

const macro_t *FUNC_3(keyrecord_t *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
    switch (VAR_4)
    {
    case 130:
        return (VAR_3->event.pressed ? FUNC_1(FUNC_0(0), FUNC_2(1), FUNC_2(2), FUNC_2(3), FUNC_2(4), FUNC_2(5), FUNC_2(6), FUNC_2(7), FUNC_2(8), FUNC_2(VAR_1), VAR_0) : VAR_2);
    case 129:
        return (VAR_3->event.pressed ? FUNC_1(FUNC_0(0), FUNC_2(1), FUNC_2(2), FUNC_2(3), FUNC_2(4), FUNC_2(5), FUNC_2(6), FUNC_2(7), FUNC_2(8), FUNC_2(VAR_1), VAR_0) : VAR_2);
    case 128:
        return (VAR_3->event.pressed ? FUNC_1(FUNC_0(0), FUNC_2(1), FUNC_2(2), FUNC_2(3), FUNC_2(4), FUNC_2(5), FUNC_2(6), FUNC_2(7), FUNC_2(8), FUNC_2(VAR_1), VAR_0) : VAR_2);
    }
    return VAR_2;
}
