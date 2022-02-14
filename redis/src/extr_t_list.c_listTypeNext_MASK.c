
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ encoding; int iter; TYPE_1__* subject; } ;
typedef TYPE_2__ listTypeIterator ;
struct TYPE_8__ {int entry; TYPE_2__* li; } ;
typedef TYPE_3__ listTypeEntry ;
struct TYPE_6__ {scalar_t__ encoding; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

int FUNC_3(listTypeIterator *VAR_1, listTypeEntry *VAR_2) {

    FUNC_1(VAR_1->subject->encoding == VAR_1->encoding);

    VAR_2->li = VAR_1;
    if (VAR_1->encoding == VAR_0) {
        return FUNC_0(VAR_1->iter, &VAR_2->entry);
    } else {
        FUNC_2("Unknown list encoding");
    }
    return 0;
}
