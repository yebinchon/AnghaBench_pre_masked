
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmd; int authenticated; } ;
typedef TYPE_1__ conn ;
struct TYPE_5__ {int verbose; int sasl; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,char*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(conn *VAR_2) {
    FUNC_0(VAR_0.sasl);
    bool VAR_3 = 0;

    switch (VAR_2->cmd) {
    case 130:
    case 131:
    case 129:
    case 128:
        VAR_3 = 1;
        break;
    default:
        VAR_3 = VAR_2->authenticated;
    }

    if (VAR_0.verbose > 1) {
        FUNC_1(VAR_1, "authenticated() in cmd 0x%02x is %s\n",
                VAR_2->cmd, VAR_3 ? "true" : "false");
    }

    return VAR_3;
}
