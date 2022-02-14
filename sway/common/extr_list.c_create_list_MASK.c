
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int capacity; void* items; scalar_t__ length; } ;
typedef TYPE_1__ list_t ;


 void* FUNC_0 (int) ;

list_t *FUNC_1(void) {
 list_t *VAR_0 = FUNC_0(sizeof(list_t));
 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_0->capacity = 10;
 VAR_0->length = 0;
 VAR_0->items = FUNC_0(sizeof(void*) * VAR_0->capacity);
 return VAR_0;
}
