
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ap_q_lock; int active_paths; int q_lock; int event_q; } ;
typedef TYPE_1__ WTStatus ;
typedef int WTEvent ;







 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int * FUNC_7 (int,char const*,char const*) ;

__attribute__((used)) static void
FUNC_8 (WTStatus *VAR_0,
                    int VAR_1, const char *VAR_2, const char *VAR_3)
{
    WTEvent *VAR_4 = FUNC_7 (VAR_1, VAR_2, VAR_3);

    char *VAR_5;
    switch (VAR_1) {
    case 132:
        VAR_5 = "create/update";
        break;
    case 128:
        VAR_5 = "scan dir";
        break;
    case 131:
        VAR_5 = "delete";
        break;
    case 129:
        VAR_5 = "rename";
        break;
    case 130:
        VAR_5 = "overflow";
        break;
    default:
        VAR_5 = "unknown";
    }

    FUNC_5 ("Adding event: %s, %s %s\n", VAR_5, VAR_2, VAR_3?VAR_3:"");

    FUNC_3 (&VAR_0->q_lock);
    FUNC_1 (VAR_0->event_q, VAR_4);
    FUNC_4 (&VAR_0->q_lock);

    if (VAR_1 == 132) {
        FUNC_3 (&VAR_0->ap_q_lock);

        char *VAR_6 = FUNC_0 (VAR_0->active_paths);
        if (!VAR_6 || FUNC_6(VAR_6, VAR_2) != 0)
            FUNC_1 (VAR_0->active_paths, FUNC_2(VAR_2));

        FUNC_4 (&VAR_0->ap_q_lock);
    }
}
