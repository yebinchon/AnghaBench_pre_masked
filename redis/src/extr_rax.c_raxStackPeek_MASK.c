
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int items; void** stack; } ;
typedef TYPE_1__ raxStack ;



__attribute__((used)) static inline void *FUNC_0(raxStack *VAR_0) {
    if (VAR_0->items == 0) return ((void*)0);
    return VAR_0->stack[VAR_0->items-1];
}
