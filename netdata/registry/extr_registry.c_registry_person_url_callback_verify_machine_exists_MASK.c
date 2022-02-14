
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct registry_person_url_callback_verify_machine_exists_data {int count; int * m; } ;
struct TYPE_2__ {int * machine; } ;
typedef TYPE_1__ REGISTRY_PERSON_URL ;
typedef int REGISTRY_MACHINE ;



__attribute__((used)) static inline int FUNC_0(void *VAR_0, void *VAR_1) {
    struct registry_person_url_callback_verify_machine_exists_data *VAR_2 = (struct registry_person_url_callback_verify_machine_exists_data *)VAR_1;
    REGISTRY_PERSON_URL *VAR_3 = (REGISTRY_PERSON_URL *)VAR_0;
    REGISTRY_MACHINE *VAR_4 = VAR_2->m;

    if(VAR_3->machine == VAR_4)
        VAR_2->count++;

    return 0;
}
