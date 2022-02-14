
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_message {int session; size_t sz; void* data; int source; } ;
struct skynet_context {int queue; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,struct skynet_message*) ;

void
FUNC_1(struct skynet_context * VAR_1, void * VAR_2, size_t VAR_3, uint32_t VAR_4, int VAR_5, int VAR_6) {
 struct skynet_message VAR_7;
 VAR_7.source = VAR_4;
 VAR_7.session = VAR_6;
 VAR_7.data = VAR_2;
 VAR_7.sz = VAR_3 | (size_t)VAR_5 << VAR_0;

 FUNC_0(VAR_1->queue, &VAR_7);
}
