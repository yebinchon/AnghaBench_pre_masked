
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stack; scalar_t__ static_items; } ;
typedef TYPE_1__ raxStack ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(raxStack *VAR_0) {
    if (VAR_0->stack != VAR_0->static_items) FUNC_0(VAR_0->stack);
}
