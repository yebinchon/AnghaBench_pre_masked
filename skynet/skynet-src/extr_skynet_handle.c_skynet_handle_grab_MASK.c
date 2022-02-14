
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
struct handle_storage {int slot_size; int lock; struct skynet_context** slot; } ;


 struct handle_storage* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct skynet_context*) ;
 int FUNC_3 (struct skynet_context*) ;

struct skynet_context *
FUNC_4(uint32_t VAR_1) {
 struct handle_storage *VAR_2 = VAR_0;
 struct skynet_context * VAR_3 = ((void*)0);

 FUNC_0(&VAR_2->lock);

 uint32_t VAR_4 = VAR_1 & (VAR_2->slot_size-1);
 struct skynet_context * VAR_5 = VAR_2->slot[VAR_4];
 if (VAR_5 && FUNC_3(VAR_5) == VAR_1) {
  VAR_3 = VAR_5;
  FUNC_2(VAR_3);
 }

 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
