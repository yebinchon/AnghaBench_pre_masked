
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sds ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ robj ;
typedef int quicklist ;
struct TYPE_14__ {scalar_t__ quicklist; } ;
struct TYPE_13__ {TYPE_4__ entry; TYPE_1__* li; } ;
typedef TYPE_3__ listTypeEntry ;
struct TYPE_11__ {scalar_t__ encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_4__*,int ,size_t) ;
 int FUNC_3 (int *,TYPE_4__*,int ,size_t) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(listTypeEntry *VAR_3, robj *VAR_4, int VAR_5) {
    if (VAR_3->li->encoding == VAR_2) {
        VAR_4 = FUNC_1(VAR_4);
        sds VAR_6 = VAR_4->ptr;
        size_t VAR_7 = FUNC_4(VAR_6);
        if (VAR_5 == VAR_1) {
            FUNC_2((quicklist *)VAR_3->entry.quicklist,
                                 &VAR_3->entry, VAR_6, VAR_7);
        } else if (VAR_5 == VAR_0) {
            FUNC_3((quicklist *)VAR_3->entry.quicklist,
                                  &VAR_3->entry, VAR_6, VAR_7);
        }
        FUNC_0(VAR_4);
    } else {
        FUNC_5("Unknown list encoding");
    }
}
