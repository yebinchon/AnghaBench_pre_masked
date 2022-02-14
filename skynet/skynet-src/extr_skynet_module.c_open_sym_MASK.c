
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_module {int * init; void* signal; void* release; void* create; } ;


 void* FUNC_0 (struct skynet_module*,char*) ;

__attribute__((used)) static int
FUNC_1(struct skynet_module *VAR_0) {
 VAR_0->create = FUNC_0(VAR_0, "_create");
 VAR_0->init = FUNC_0(VAR_0, "_init");
 VAR_0->release = FUNC_0(VAR_0, "_release");
 VAR_0->signal = FUNC_0(VAR_0, "_signal");

 return VAR_0->init == ((void*)0);
}
