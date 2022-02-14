
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
struct handle_storage {int handle_index; int slot_size; int harbor; struct skynet_context** slot; int lock; } ;


 struct handle_storage* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct skynet_context**,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct skynet_context*) ;
 int FUNC_5 (struct skynet_context**) ;
 struct skynet_context** FUNC_6 (int) ;

uint32_t
FUNC_7(struct skynet_context *VAR_2) {
 struct handle_storage *VAR_3 = VAR_0;

 FUNC_2(&VAR_3->lock);

 for (;;) {
  int VAR_4;
  uint32_t VAR_5 = VAR_3->handle_index;
  for (VAR_4=0;VAR_4<VAR_3->slot_size;VAR_4++,VAR_5++) {
   if (VAR_5 > VAR_1) {

    VAR_5 = 1;
   }
   int VAR_6 = VAR_5 & (VAR_3->slot_size-1);
   if (VAR_3->slot[VAR_6] == ((void*)0)) {
    VAR_3->slot[VAR_6] = VAR_2;
    VAR_3->handle_index = VAR_5 + 1;

    FUNC_3(&VAR_3->lock);

    VAR_5 |= VAR_3->harbor;
    return VAR_5;
   }
  }
  FUNC_0((VAR_3->slot_size*2 - 1) <= VAR_1);
  struct skynet_context ** VAR_7 = FUNC_6(VAR_3->slot_size * 2 * sizeof(struct skynet_context *));
  FUNC_1(VAR_7, 0, VAR_3->slot_size * 2 * sizeof(struct skynet_context *));
  for (VAR_4=0;VAR_4<VAR_3->slot_size;VAR_4++) {
   int VAR_8 = FUNC_4(VAR_3->slot[VAR_4]) & (VAR_3->slot_size * 2 - 1);
   FUNC_0(VAR_7[VAR_8] == ((void*)0));
   VAR_7[VAR_8] = VAR_3->slot[VAR_4];
  }
  FUNC_5(VAR_3->slot);
  VAR_3->slot = VAR_7;
  VAR_3->slot_size *= 2;
 }
}
