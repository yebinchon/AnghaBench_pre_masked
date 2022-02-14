
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ble_npl_event {void* arg; } ;


 int FUNC_0 (char*,struct ble_npl_event*,void*) ;

void *FUNC_1(struct ble_npl_event *VAR_0) {
    FUNC_0("ble_npl_event_get_arg(%p) -> %p\n", VAR_0, VAR_0->arg);
    return VAR_0->arg;
}
