
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ptr; } ;
typedef TYPE_3__ robj ;
struct TYPE_10__ {int zi; } ;
struct TYPE_12__ {TYPE_2__ entry; TYPE_1__* li; } ;
typedef TYPE_4__ listTypeEntry ;
struct TYPE_9__ {scalar_t__ encoding; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(listTypeEntry *VAR_1, robj *VAR_2) {
    if (VAR_1->li->encoding == VAR_0) {
        FUNC_3(((void*)0),VAR_2,FUNC_1(VAR_2));
        return FUNC_0(VAR_1->entry.zi,VAR_2->ptr,FUNC_2(VAR_2->ptr));
    } else {
        FUNC_4("Unknown list encoding");
    }
}
