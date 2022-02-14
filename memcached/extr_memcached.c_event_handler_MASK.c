
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {short which; int const sfd; } ;
typedef TYPE_1__ conn ;
struct TYPE_6__ {scalar_t__ verbose; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;

void FUNC_4(const int VAR_2, const short VAR_3, void *VAR_4) {
    conn *VAR_5;

    VAR_5 = (conn *)VAR_4;
    FUNC_0(VAR_5 != ((void*)0));

    VAR_5->which = VAR_3;


    if (VAR_2 != VAR_5->sfd) {
        if (VAR_0.verbose > 0)
            FUNC_3(VAR_1, "Catastrophic: event fd doesn't match conn fd!\n");
        FUNC_1(VAR_5);
        return;
    }

    FUNC_2(VAR_5);


    return;
}
