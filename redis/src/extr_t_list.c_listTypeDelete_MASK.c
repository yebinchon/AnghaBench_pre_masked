
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int iter; } ;
typedef TYPE_2__ listTypeIterator ;
struct TYPE_8__ {int entry; TYPE_1__* li; } ;
typedef TYPE_3__ listTypeEntry ;
struct TYPE_6__ {scalar_t__ encoding; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;

void FUNC_2(listTypeIterator *VAR_1, listTypeEntry *VAR_2) {
    if (VAR_2->li->encoding == VAR_0) {
        FUNC_0(VAR_1->iter, &VAR_2->entry);
    } else {
        FUNC_1("Unknown list encoding");
    }
}
