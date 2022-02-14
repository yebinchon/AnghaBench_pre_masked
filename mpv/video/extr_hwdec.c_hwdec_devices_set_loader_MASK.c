
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {void (* load_api ) (void*) ;void* load_api_ctx; } ;



void FUNC_0(struct mp_hwdec_devices *VAR_0,
    void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    VAR_0->load_api = VAR_1;
    VAR_0->load_api_ctx = VAR_3;
}
