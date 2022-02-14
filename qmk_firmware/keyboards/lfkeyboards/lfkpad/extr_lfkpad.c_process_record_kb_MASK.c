
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 int FUNC_2 () ;

bool FUNC_3(uint16_t VAR_4, keyrecord_t* VAR_5)
{
    if (VAR_3 && VAR_5->event.pressed){
        FUNC_0(VAR_1, VAR_2);
    }
    if (VAR_4 == VAR_0) {
        FUNC_2();
    } else {
    }
    return FUNC_1(VAR_4, VAR_5);
}
