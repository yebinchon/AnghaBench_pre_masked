
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int endless; } ;


 int FUNC_0 (struct skynet_context*) ;
 struct skynet_context* FUNC_1 (int ) ;

void
FUNC_2(uint32_t VAR_0) {
 struct skynet_context * VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0)) {
  return;
 }
 VAR_1->endless = 1;
 FUNC_0(VAR_1);
}
