
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {int mods; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

bool FUNC_4(uint16_t VAR_7, keyrecord_t *VAR_8) {


    bool VAR_9 = VAR_6->mods & (FUNC_0(VAR_2) | FUNC_0(VAR_2));
    bool VAR_10 = VAR_6->mods & (FUNC_0(VAR_4));
    if ((VAR_7 == VAR_3 && !VAR_10) ||
        VAR_7 == VAR_1 ||
        (VAR_7 == VAR_0 && VAR_9))
    {
        if (VAR_8->event.pressed) {
            FUNC_2(VAR_7);
            FUNC_3(VAR_7);
            FUNC_2(VAR_5);
            FUNC_3(VAR_5);
        }
        return 0;
    }


    return FUNC_1(VAR_7, VAR_8);



}
