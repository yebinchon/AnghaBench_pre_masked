
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {int lock; int load_api; int num_hwctxs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mp_hwdec_devices*) ;

void FUNC_3(struct mp_hwdec_devices *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_0(!VAR_0->num_hwctxs);
    FUNC_0(!VAR_0->load_api);
    FUNC_1(&VAR_0->lock);
    FUNC_2(VAR_0);
}
