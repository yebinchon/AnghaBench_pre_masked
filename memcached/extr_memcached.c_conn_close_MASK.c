
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sfd; scalar_t__ ssl; int event; } ;
typedef TYPE_1__ conn ;
struct TYPE_9__ {int verbose; } ;
struct TYPE_8__ {int curr_conns; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_13(conn *VAR_6) {
    FUNC_5(VAR_6 != ((void*)0));


    FUNC_9(&VAR_6->event);

    if (VAR_3.verbose > 1)
        FUNC_10(VAR_5, "<%d connection closed.\n", VAR_6->sfd);

    FUNC_7(VAR_6);

    FUNC_0(VAR_6->sfd);
    FUNC_8(VAR_6, VAR_1);






    FUNC_6(VAR_6->sfd);
    FUNC_11(&VAR_2);
    VAR_0 = 1;
    FUNC_12(&VAR_2);

    FUNC_3();
    VAR_4.curr_conns--;
    FUNC_4();

    return;
}
