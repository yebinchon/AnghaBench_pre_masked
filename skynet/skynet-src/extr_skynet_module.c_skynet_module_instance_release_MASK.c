
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_module {int (* release ) (void*) ;} ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct skynet_module *VAR_0, void *VAR_1) {
 if (VAR_0->release) {
  VAR_0->release(VAR_1);
 }
}
