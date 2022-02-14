
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int report_id; } ;
typedef TYPE_1__ report_mouse_t ;
struct TYPE_6__ {int (* send_mouse ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(report_mouse_t *VAR_2) {
    if (!VAR_1) return;



    (*VAR_1->send_mouse)(VAR_2);
}
