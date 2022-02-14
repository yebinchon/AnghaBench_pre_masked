
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
struct TYPE_8__ {int flags; scalar_t__ querybuf; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {int unblocked_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_3__ VAR_2 ;
 int FUNC_5 (int ) ;

void FUNC_6(void) {
    listNode *VAR_3;
    client *VAR_4;

    while (FUNC_2(VAR_2.unblocked_clients)) {
        VAR_3 = FUNC_1(VAR_2.unblocked_clients);
        FUNC_5(VAR_3 != ((void*)0));
        VAR_4 = VAR_3->value;
        FUNC_0(VAR_2.unblocked_clients,VAR_3);
        VAR_4->flags &= ~VAR_1;





        if (!(VAR_4->flags & VAR_0)) {
            if (VAR_4->querybuf && FUNC_4(VAR_4->querybuf) > 0) {
                FUNC_3(VAR_4);
            }
        }
    }
}
