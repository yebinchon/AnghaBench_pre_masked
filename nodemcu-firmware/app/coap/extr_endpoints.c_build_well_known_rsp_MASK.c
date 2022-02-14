
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {char* name; struct TYPE_8__* next; } ;
typedef TYPE_3__ coap_luser_entry ;
struct TYPE_9__ {char* core_attr; TYPE_2__* path; TYPE_1__* user_entry; int * handler; } ;
typedef TYPE_4__ coap_endpoint_t ;
struct TYPE_7__ {int count; char** elems; } ;
struct TYPE_6__ {TYPE_3__* next; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;

void FUNC_3(char *VAR_1, uint16_t VAR_2)
{
    const coap_endpoint_t *VAR_3 = VAR_0;
    int VAR_4;
    uint16_t VAR_5 = VAR_2;

    FUNC_0(VAR_1, 0, VAR_5);

    VAR_5--;

    while(((void*)0) != VAR_3->handler)
    {
        if (((void*)0) == VAR_3->core_attr) {
            VAR_3++;
            continue;
        }
        if (((void*)0) == VAR_3->user_entry){
            if (0 < FUNC_1(VAR_1)) {
                FUNC_2(VAR_1, ",", VAR_5);
                VAR_5--;
            }

            FUNC_2(VAR_1, "<", VAR_5);
            VAR_5--;

            for (VAR_4 = 0; VAR_4 < VAR_3->path->count; VAR_4++) {
                FUNC_2(VAR_1, "/", VAR_5);
                VAR_5--;

                FUNC_2(VAR_1, VAR_3->path->elems[VAR_4], VAR_5);
                VAR_5 -= FUNC_1(VAR_3->path->elems[VAR_4]);
            }

            FUNC_2(VAR_1, ">;", VAR_5);
            VAR_5 -= 2;

            FUNC_2(VAR_1, VAR_3->core_attr, VAR_5);
            VAR_5 -= FUNC_1(VAR_3->core_attr);
        } else {
            coap_luser_entry *VAR_6 = VAR_3->user_entry->next;
            while(((void*)0) != VAR_6){
                if (0 < FUNC_1(VAR_1)) {
                    FUNC_2(VAR_1, ",", VAR_5);
                    VAR_5--;
                }

                FUNC_2(VAR_1, "<", VAR_5);
                VAR_5--;

                for (VAR_4 = 0; VAR_4 < VAR_3->path->count; VAR_4++) {
                    FUNC_2(VAR_1, "/", VAR_5);
                    VAR_5--;

                    FUNC_2(VAR_1, VAR_3->path->elems[VAR_4], VAR_5);
                    VAR_5 -= FUNC_1(VAR_3->path->elems[VAR_4]);
                }

                FUNC_2(VAR_1, "/", VAR_5);
                VAR_5--;

                FUNC_2(VAR_1, VAR_6->name, VAR_5);
                VAR_5 -= FUNC_1(VAR_6->name);

                FUNC_2(VAR_1, ">;", VAR_5);
                VAR_5 -= 2;

                FUNC_2(VAR_1, VAR_3->core_attr, VAR_5);
                VAR_5 -= FUNC_1(VAR_3->core_attr);

                VAR_6 = VAR_6->next;
            }
        }
        VAR_3++;
    }
}
