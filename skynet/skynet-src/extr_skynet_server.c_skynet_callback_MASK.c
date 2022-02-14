
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {void* cb_ud; int cb; } ;
typedef int skynet_cb ;



void
FUNC_0(struct skynet_context * VAR_0, void *VAR_1, skynet_cb VAR_2) {
 VAR_0->cb = VAR_2;
 VAR_0->cb_ud = VAR_1;
}
