
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_device_list {scalar_t__ num_devices; int devices; } ;
struct ao_device_desc {char* desc; char* name; } ;
struct ao {TYPE_1__* driver; } ;
typedef int buf ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct ao_device_list*,int ,scalar_t__,struct ao_device_desc) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 void* FUNC_2 (struct ao_device_list*,char*,char const*,char*) ;
 void* FUNC_3 (struct ao_device_list*,char const*) ;

void FUNC_4(struct ao_device_list *VAR_0, struct ao *VAR_1,
                        struct ao_device_desc *VAR_2)
{
    struct ao_device_desc VAR_3 = *VAR_2;
    const char *VAR_4 = VAR_1->driver->name;
    char VAR_5[80];
    if (!VAR_3.desc || !VAR_3.desc[0]) {
        if (VAR_3.name && VAR_3.name[0]) {
            VAR_3.desc = VAR_3.name;
        } else if (VAR_0->num_devices) {

            FUNC_1(VAR_5, sizeof(VAR_5), "Default (%s)", VAR_4);
            VAR_3.desc = VAR_5;
        } else {

            VAR_3.desc = "Default";
        }
    }
    VAR_3.name = (VAR_3.name && VAR_3.name[0]) ? FUNC_2(VAR_0, "%s/%s", VAR_4, VAR_3.name)
                                   : FUNC_3(VAR_0, VAR_4);
    VAR_3.desc = FUNC_3(VAR_0, VAR_3.desc);
    FUNC_0(VAR_0, VAR_0->devices, VAR_0->num_devices, VAR_3);
}
