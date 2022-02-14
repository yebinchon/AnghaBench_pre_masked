
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TCP_ConnectionTable {TYPE_1__* banner1; } ;
struct TYPE_2__ {unsigned int is_capture_cert; unsigned int is_capture_html; unsigned int is_capture_heartbleed; unsigned int is_capture_ticketbleed; } ;



void
FUNC_0(struct TCP_ConnectionTable *VAR_0,
    unsigned VAR_1,
    unsigned VAR_2,
    unsigned VAR_3,
 unsigned VAR_4)
{
    VAR_0->banner1->is_capture_cert = VAR_1;
    VAR_0->banner1->is_capture_html = VAR_2;
    VAR_0->banner1->is_capture_heartbleed = VAR_3;
    VAR_0->banner1->is_capture_ticketbleed = VAR_4;
}
