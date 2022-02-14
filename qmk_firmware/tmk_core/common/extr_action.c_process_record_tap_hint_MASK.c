
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int key; } ;
struct TYPE_11__ {TYPE_1__ event; } ;
typedef TYPE_4__ keyrecord_t ;
struct TYPE_10__ {int code; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_12__ {TYPE_3__ swap; TYPE_2__ kind; } ;
typedef TYPE_5__ action_t ;




 TYPE_5__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(keyrecord_t *VAR_2) {
    action_t VAR_3 = FUNC_0(VAR_2->event.key);

    switch (VAR_3.kind.id) {
    }
}
