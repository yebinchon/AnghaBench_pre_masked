
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_7__ {int report_id; int mods; } ;
struct TYPE_8__ {int * raw; int report_id; TYPE_1__ nkro; int mods; } ;
typedef TYPE_2__ report_keyboard_t ;
struct TYPE_10__ {int (* send_keyboard ) (TYPE_2__*) ;} ;
struct TYPE_9__ {scalar_t__ nkro; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_6__* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(report_keyboard_t *VAR_7) {
    if (!VAR_4) return;
    {



    }
    (*VAR_4->send_keyboard)(VAR_7);

    if (VAR_3) {
        FUNC_0("keyboard_report: ");
        for (uint8_t VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
            FUNC_1("%02X ", VAR_7->raw[VAR_8]);
        }
        FUNC_0("\n");
    }
}
