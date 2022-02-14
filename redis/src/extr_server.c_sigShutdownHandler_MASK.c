
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown_asap; scalar_t__ loading; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_2) {
    char *VAR_3;

    switch (VAR_2) {
    case 129:
        VAR_3 = "Received SIGINT scheduling shutdown...";
        break;
    case 128:
        VAR_3 = "Received SIGTERM scheduling shutdown...";
        break;
    default:
        VAR_3 = "Received shutdown signal, scheduling shutdown...";
    };





    if (VAR_1.shutdown_asap && VAR_2 == 129) {
        FUNC_3(VAR_0, "You insist... exiting now.");
        FUNC_2(FUNC_1());
        FUNC_0(1);
    } else if (VAR_1.loading) {
        FUNC_3(VAR_0, "Received shutdown signal during loading, exiting now.");
        FUNC_0(0);
    }

    FUNC_3(VAR_0, VAR_3);
    VAR_1.shutdown_asap = 1;
}
