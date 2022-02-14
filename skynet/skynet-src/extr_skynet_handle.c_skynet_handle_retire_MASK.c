
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct skynet_context {int dummy; } ;
struct handle_storage {int slot_size; int name_count; int lock; TYPE_1__* name; struct skynet_context** slot; } ;
struct TYPE_2__ {int handle; int name; } ;


 struct handle_storage* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct skynet_context*) ;
 int FUNC_3 (struct skynet_context*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(uint32_t VAR_1) {
 int VAR_2 = 0;
 struct handle_storage *VAR_3 = VAR_0;

 FUNC_0(&VAR_3->lock);

 uint32_t VAR_4 = VAR_1 & (VAR_3->slot_size-1);
 struct skynet_context * VAR_5 = VAR_3->slot[VAR_4];

 if (VAR_5 != ((void*)0) && FUNC_2(VAR_5) == VAR_1) {
  VAR_3->slot[VAR_4] = ((void*)0);
  VAR_2 = 1;
  int VAR_6;
  int VAR_7=0, VAR_8=VAR_3->name_count;
  for (VAR_6=0; VAR_6<VAR_8; ++VAR_6) {
   if (VAR_3->name[VAR_6].handle == VAR_1) {
    FUNC_4(VAR_3->name[VAR_6].name);
    continue;
   } else if (VAR_6!=VAR_7) {
    VAR_3->name[VAR_7] = VAR_3->name[VAR_6];
   }
   ++VAR_7;
  }
  VAR_3->name_count = VAR_7;
 } else {
  VAR_5 = ((void*)0);
 }

 FUNC_1(&VAR_3->lock);

 if (VAR_5) {

  FUNC_3(VAR_5);
 }

 return VAR_2;
}
