
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t btype; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int * blocked_clients_by_type; int blocked_clients; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_6__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(client *VAR_8) {
    if (VAR_8->btype == VAR_0 ||
        VAR_8->btype == VAR_5 ||
        VAR_8->btype == VAR_3) {
        FUNC_4(VAR_8);
    } else if (VAR_8->btype == VAR_4) {
        FUNC_5(VAR_8);
    } else if (VAR_8->btype == VAR_1) {
        if (FUNC_0(VAR_8)) FUNC_4(VAR_8);
        FUNC_3(VAR_8);
    } else {
        FUNC_2("Unknown btype in unblockClient().");
    }


    VAR_7.blocked_clients--;
    VAR_7.blocked_clients_by_type[VAR_8->btype]--;
    VAR_8->flags &= ~VAR_6;
    VAR_8->btype = VAR_2;
    FUNC_1(VAR_8);
}
