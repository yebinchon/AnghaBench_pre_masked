
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_message {int dummy; } ;
struct skynet_context {int queue; } ;


 int FUNC_0 (struct skynet_context*) ;
 struct skynet_context* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct skynet_message*) ;

int
FUNC_3(uint32_t VAR_0, struct skynet_message *VAR_1) {
 struct skynet_context * VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == ((void*)0)) {
  return -1;
 }
 FUNC_2(VAR_2->queue, VAR_1);
 FUNC_0(VAR_2);

 return 0;
}
