
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cmd; int substate; } ;
typedef TYPE_1__ conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_12(conn *VAR_3) {
    FUNC_0(VAR_3 != ((void*)0));
    FUNC_0(VAR_3->cmd >= 0);

    switch(VAR_3->substate) {
    case 130:
        if (VAR_3->cmd == VAR_0 ||
                VAR_3->cmd == VAR_1) {
            FUNC_4(VAR_3);
        } else {
            FUNC_11(VAR_3);
        }
        break;
    case 136:
        FUNC_2(VAR_3);
        break;
    case 134:
    case 128:
        FUNC_8(VAR_3);
        break;
    case 129:
        FUNC_10(VAR_3);
        break;
    case 135:
        FUNC_6(VAR_3);
        break;
    case 133:
        FUNC_1(VAR_3);
        break;
    case 137:
        FUNC_7(VAR_3);
        break;
    case 132:
        FUNC_9(VAR_3);
        break;
    case 131:
        FUNC_5(VAR_3);
        break;
    default:
        FUNC_3(VAR_2, "Not handling substate %d\n", VAR_3->substate);
        FUNC_0(0);
    }
}
