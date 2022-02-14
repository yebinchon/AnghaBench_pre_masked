
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct skynet_context {int dummy; } ;
struct handle_storage {int slot_size; int lock; struct skynet_context** slot; } ;


 struct handle_storage* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct skynet_context*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void
FUNC_4() {
 struct handle_storage *VAR_1 = VAR_0;
 for (;;) {
  int VAR_2=0;
  int VAR_3;
  for (VAR_3=0;VAR_3<VAR_1->slot_size;VAR_3++) {
   FUNC_0(&VAR_1->lock);
   struct skynet_context * VAR_4 = VAR_1->slot[VAR_3];
   uint32_t VAR_5 = 0;
   if (VAR_4)
    VAR_5 = FUNC_2(VAR_4);
   FUNC_1(&VAR_1->lock);
   if (VAR_5 != 0) {
    if (FUNC_3(VAR_5)) {
     ++VAR_2;
    }
   }
  }
  if (VAR_2==0)
   return;
 }
}
