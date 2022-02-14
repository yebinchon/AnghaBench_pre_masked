
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_module {int (* signal ) (void*,int) ;} ;


 int FUNC_0 (void*,int) ;

void
FUNC_1(struct skynet_module *VAR_0, void *VAR_1, int VAR_2) {
 if (VAR_0->signal) {
  VAR_0->signal(VAR_1, VAR_2);
 }
}
