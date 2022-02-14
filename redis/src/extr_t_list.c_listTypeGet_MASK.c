
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_6__ {int longval; int sz; scalar_t__ value; } ;
struct TYPE_7__ {TYPE_2__ entry; TYPE_1__* li; } ;
typedef TYPE_3__ listTypeEntry ;
struct TYPE_5__ {scalar_t__ encoding; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char*,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

robj *FUNC_3(listTypeEntry *VAR_1) {
    robj *VAR_2 = ((void*)0);
    if (VAR_1->li->encoding == VAR_0) {
        if (VAR_1->entry.value) {
            VAR_2 = FUNC_0((char *)VAR_1->entry.value,
                                       VAR_1->entry.sz);
        } else {
            VAR_2 = FUNC_1(VAR_1->entry.longval);
        }
    } else {
        FUNC_2("Unknown list encoding");
    }
    return VAR_2;
}
