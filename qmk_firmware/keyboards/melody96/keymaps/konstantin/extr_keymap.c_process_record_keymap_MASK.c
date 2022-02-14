
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int v; int s; int h; } ;



 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_4__** VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

bool FUNC_1(uint16_t VAR_3, keyrecord_t *VAR_4) {
    switch (VAR_3) {
    case 128:
        if (VAR_4->event.pressed) {
            VAR_0 = (VAR_0 + 1) % VAR_1;
            FUNC_0(VAR_2[VAR_0]->h, VAR_2[VAR_0]->s, VAR_2[VAR_0]->v);
        }
        break;
    }

    return 1;
}
