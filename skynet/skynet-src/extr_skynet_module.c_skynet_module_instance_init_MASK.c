
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_module {int (* init ) (void*,struct skynet_context*,char const*) ;} ;
struct skynet_context {int dummy; } ;


 int FUNC_0 (void*,struct skynet_context*,char const*) ;

int
FUNC_1(struct skynet_module *VAR_0, void * VAR_1, struct skynet_context *VAR_2, const char * VAR_3) {
 return VAR_0->init(VAR_1, VAR_2, VAR_3);
}
