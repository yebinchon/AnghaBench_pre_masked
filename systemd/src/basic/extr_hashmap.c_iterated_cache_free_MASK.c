
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ptr; } ;
struct TYPE_8__ {int ptr; } ;
struct TYPE_10__ {TYPE_2__ values; TYPE_1__ keys; } ;
typedef TYPE_3__ IteratedCache ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;

IteratedCache *FUNC_2(IteratedCache *VAR_0) {
        if (VAR_0) {
                FUNC_0(VAR_0->keys.ptr);
                FUNC_0(VAR_0->values.ptr);
        }

        return FUNC_1(VAR_0);
}
