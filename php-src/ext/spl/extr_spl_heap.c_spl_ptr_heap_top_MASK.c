
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; void* elements; } ;
typedef TYPE_1__ spl_ptr_heap ;



__attribute__((used)) static void *FUNC_0(spl_ptr_heap *VAR_0) {
 if (VAR_0->count == 0) {
  return ((void*)0);
 }

 return VAR_0->elements;
}
