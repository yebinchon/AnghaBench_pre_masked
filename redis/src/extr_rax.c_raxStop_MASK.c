
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ key; scalar_t__ key_static_string; int stack; } ;
typedef TYPE_1__ raxIterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(raxIterator *VAR_0) {
    if (VAR_0->key != VAR_0->key_static_string) FUNC_1(VAR_0->key);
    FUNC_0(&VAR_0->stack);
}
