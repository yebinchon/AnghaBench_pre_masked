
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct skynet_context {int dummy; } ;
struct harbor {int id; scalar_t__ slave; struct skynet_context* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct skynet_context*,struct harbor*,int ) ;
 int FUNC_1 (struct skynet_context*) ;
 int FUNC_2 (char const*,char*,int*,scalar_t__*) ;

int
FUNC_3(struct harbor *VAR_1, struct skynet_context *VAR_2, const char * VAR_3) {
 VAR_1->ctx = VAR_2;
 int VAR_4 = 0;
 uint32_t VAR_5 = 0;
 FUNC_2(VAR_3,"%d %u", &VAR_4, &VAR_5);
 if (VAR_5 == 0) {
  return 1;
 }
 VAR_1->id = VAR_4;
 VAR_1->slave = VAR_5;
 FUNC_0(VAR_2, VAR_1, VAR_0);
 FUNC_1(VAR_2);

 return 0;
}
