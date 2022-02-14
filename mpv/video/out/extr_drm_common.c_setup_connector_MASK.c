
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct kms {TYPE_1__* connector; int card_no; int log; } ;
typedef int drmModeRes ;
struct TYPE_5__ {scalar_t__ connection; scalar_t__ count_modes; } ;
typedef TYPE_1__ drmModeConnector ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kms*,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct kms*,int const*,char const*) ;
 TYPE_1__* FUNC_3 (struct kms*,int const*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static bool FUNC_6(struct kms *VAR_1, const drmModeRes *VAR_2,
                            const char *VAR_3)
{
    drmModeConnector *VAR_4;

    if (VAR_3
    && FUNC_5(VAR_3, "")
    && FUNC_5(VAR_3, "auto")) {
        VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
        if (!VAR_4) {
            FUNC_0(VAR_1, "No connector with name %s found\n", VAR_3);
            FUNC_4(VAR_1->log, VAR_1->card_no);
            return 0;
        }
    } else {
        VAR_4 = FUNC_3(VAR_1, VAR_2);
        if (!VAR_4) {
            FUNC_0(VAR_1, "No connected connectors found\n");
            return 0;
        }
    }

    if (VAR_4->connection != VAR_0) {
        FUNC_1(VAR_4);
        FUNC_0(VAR_1, "Chosen connector is disconnected\n");
        return 0;
    }

    if (VAR_4->count_modes == 0) {
        FUNC_1(VAR_4);
        FUNC_0(VAR_1, "Chosen connector has no valid modes\n");
        return 0;
    }

    VAR_1->connector = VAR_4;
    return 1;
}
