
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine_request_callback_data {scalar_t__ find_this_machine; TYPE_1__* result; } ;
struct TYPE_2__ {scalar_t__ machine; } ;
typedef TYPE_1__ REGISTRY_PERSON_URL ;



__attribute__((used)) static int FUNC_0(void *VAR_0, void *VAR_1) {
    REGISTRY_PERSON_URL *VAR_2 = (REGISTRY_PERSON_URL *)VAR_0;
    struct machine_request_callback_data *VAR_3 = (struct machine_request_callback_data *)VAR_1;

    if(VAR_2->machine == VAR_3->find_this_machine) {
        VAR_3->result = VAR_2;
        return -1;
    }

    return 0;
}
