
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_7__ {int persons_memory; int persons; int persons_count; } ;
struct TYPE_6__ {int guid; scalar_t__ usages; scalar_t__ last_t; scalar_t__ first_t; int person_urls; } ;
typedef TYPE_1__ REGISTRY_PERSON ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int) ;
 int FUNC_4 (char*,int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_6 (int ,char const*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

REGISTRY_PERSON *FUNC_9(const char *VAR_4, time_t VAR_5) {
    FUNC_1(VAR_0, "Registry: registry_person_allocate('%s'): allocating new person, sizeof(PERSON)=%zu", (VAR_4)?VAR_4:"", sizeof(REGISTRY_PERSON));

    REGISTRY_PERSON *VAR_6 = FUNC_5(sizeof(REGISTRY_PERSON));
    if(!VAR_4) {
        for(;;) {
            uuid_t VAR_7;
            FUNC_7(VAR_7);
            FUNC_8(VAR_7, VAR_6->guid);

            FUNC_1(VAR_0, "Registry: Checking if the generated person guid '%s' is unique", VAR_6->guid);
            if (!FUNC_2(VAR_3.persons, VAR_6->guid)) {
                FUNC_1(VAR_0, "Registry: generated person guid '%s' is unique", VAR_6->guid);
                break;
            }
            else
                FUNC_4("Registry: generated person guid '%s' found in the registry. Retrying...", VAR_6->guid);
        }
    }
    else
        FUNC_6(VAR_6->guid, VAR_4, VAR_1);

    FUNC_1(VAR_0, "Registry: registry_person_allocate('%s'): creating dictionary of urls", VAR_6->guid);
    FUNC_0(&VAR_6->person_urls, VAR_2);

    VAR_6->first_t = VAR_6->last_t = (uint32_t)VAR_5;
    VAR_6->usages = 0;

    VAR_3.persons_memory += sizeof(REGISTRY_PERSON);

    VAR_3.persons_count++;
    FUNC_3(VAR_3.persons, VAR_6->guid, VAR_6, sizeof(REGISTRY_PERSON));

    return VAR_6;
}
