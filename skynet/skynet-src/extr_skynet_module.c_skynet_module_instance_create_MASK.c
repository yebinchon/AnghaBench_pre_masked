
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_module {void* (* create ) () ;} ;


 void* FUNC_0 () ;

void *
FUNC_1(struct skynet_module *VAR_0) {
 if (VAR_0->create) {
  return VAR_0->create();
 } else {
  return (void *)(intptr_t)(~0);
 }
}
