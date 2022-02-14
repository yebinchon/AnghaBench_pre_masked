
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int head; } ;
typedef TYPE_1__ sei_t ;
struct TYPE_9__ {int type; int size; } ;
typedef TYPE_2__ sei_message_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

size_t FUNC_2(sei_t* VAR_0)
{
    if (!VAR_0 || !VAR_0->head) {
        return 0;
    }

    size_t VAR_1 = 2;
    sei_message_t* VAR_2;
    for (VAR_2 = FUNC_0(VAR_0); VAR_2; VAR_2 = FUNC_1(VAR_2)) {
        VAR_1 += 1 + (VAR_2->type / 255);
        VAR_1 += 1 + (VAR_2->size / 255);
        VAR_1 += 1 + (VAR_2->size * 4 / 3);
    }

    return VAR_1;
}
