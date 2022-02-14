
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
struct handle_storage {int slot_size; int harbor; int handle_index; int name_cap; void* name; scalar_t__ name_count; int lock; void* slot; } ;
struct handle_name {int dummy; } ;


 int VAR_0 ;
 struct handle_storage* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;

void
FUNC_4(int VAR_3) {
 FUNC_0(VAR_1==((void*)0));
 struct handle_storage * VAR_4 = FUNC_3(sizeof(*VAR_1));
 VAR_4->slot_size = VAR_0;
 VAR_4->slot = FUNC_3(VAR_4->slot_size * sizeof(struct skynet_context *));
 FUNC_1(VAR_4->slot, 0, VAR_4->slot_size * sizeof(struct skynet_context *));

 FUNC_2(&VAR_4->lock);

 VAR_4->harbor = (uint32_t) (VAR_3 & 0xff) << VAR_2;
 VAR_4->handle_index = 1;
 VAR_4->name_cap = 2;
 VAR_4->name_count = 0;
 VAR_4->name = FUNC_3(VAR_4->name_cap * sizeof(struct handle_name));

 VAR_1 = VAR_4;


}
