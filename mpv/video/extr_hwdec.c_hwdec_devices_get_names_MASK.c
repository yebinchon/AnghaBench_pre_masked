
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_hwdec_devices {int num_hwctxs; TYPE_1__** hwctxs; } ;
struct TYPE_2__ {char* driver_name; } ;


 int FUNC_0 (char**,char*) ;

char *FUNC_1(struct mp_hwdec_devices *VAR_0)
{
    char *VAR_1 = ((void*)0);
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_hwctxs; VAR_2++) {
        if (VAR_1)
            FUNC_0(&VAR_1, ",");
        FUNC_0(&VAR_1, VAR_0->hwctxs[VAR_2]->driver_name);
    }
    return VAR_1;
}
