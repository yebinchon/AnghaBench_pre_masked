
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct found_device {scalar_t__ host_device_hash; char const* host_device; char const* guest_device; struct found_device* next; } ;


 struct found_device* VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 struct found_device* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 char const* FUNC_5 (char const*) ;

void FUNC_6(const char *VAR_1, const char *VAR_2) {




    uint32_t VAR_3 = FUNC_3(VAR_1);

    if(VAR_2 && (!*VAR_2 || FUNC_4(VAR_1, VAR_2) == 0))
        VAR_2 = ((void*)0);

    struct found_device *VAR_4;
    for(VAR_4 = VAR_0; VAR_4 ; VAR_4 = VAR_4->next) {
        if(VAR_4->host_device_hash == VAR_3 && !FUNC_4(VAR_1, VAR_4->host_device)) {

            if(VAR_2 && (!VAR_4->guest_device || !FUNC_4(VAR_4->host_device, VAR_4->guest_device))) {
                if(VAR_4->guest_device) FUNC_0((void *)VAR_4->guest_device);
                VAR_4->guest_device = FUNC_5(VAR_2);
            }

            return;
        }
    }

    VAR_4 = FUNC_2(sizeof(struct found_device));
    VAR_4->host_device = FUNC_5(VAR_1);
    VAR_4->host_device_hash = VAR_3;
    VAR_4->guest_device = (VAR_2)?FUNC_5(VAR_2):((void*)0);
    VAR_4->next = VAR_0;
    VAR_0 = VAR_4;
}
