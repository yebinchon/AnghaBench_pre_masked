
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ interrupted; int count; } ;
struct TYPE_5__ {TYPE_1__ tap; int event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char) ;

void FUNC_2(keyrecord_t VAR_0) {
    FUNC_0(VAR_0.event);

    FUNC_1(":%u%c", VAR_0.tap.count, (VAR_0.tap.interrupted ? '-' : ' '));

}
