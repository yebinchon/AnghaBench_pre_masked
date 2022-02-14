
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ap_q_lock; int active_paths; int q_lock; int event_q; } ;
typedef TYPE_1__ WTStatus ;
typedef int WTEvent ;


 int VAR_0 ;






 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 int * FUNC_9 (int,char*,char*) ;

__attribute__((used)) static void
FUNC_10 (WTStatus *VAR_1,
                    int VAR_2, const char *VAR_3, const char *VAR_4)
{
    char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (VAR_3)
        VAR_5 = FUNC_4 (VAR_3, -1, VAR_0);
    if (VAR_4)
        VAR_6 = FUNC_4 (VAR_4, -1, VAR_0);

    WTEvent *VAR_7 = FUNC_9 (VAR_2, VAR_5, VAR_6);

    FUNC_0 (VAR_5);
    FUNC_0 (VAR_6);

    char *VAR_8;
    switch (VAR_2) {
    case 132:
        VAR_8 = "create/update";
        break;
    case 128:
        VAR_8 = "scan dir";
        break;
    case 131:
        VAR_8 = "delete";
        break;
    case 129:
        VAR_8 = "rename";
        break;
    case 130:
        VAR_8 = "overflow";
        break;
    case 133:
        VAR_8 = "attribute change";
        break;
    default:
        VAR_8 = "unknown";
    }

    FUNC_7 ("Adding event: %s, %s %s\n", VAR_8, VAR_3, VAR_4?VAR_4:"");

    FUNC_5 (&VAR_1->q_lock);
    FUNC_2 (VAR_1->event_q, VAR_7);
    FUNC_6 (&VAR_1->q_lock);

    if (VAR_2 == 132) {
        FUNC_5 (&VAR_1->ap_q_lock);

        char *VAR_9 = FUNC_1 (VAR_1->active_paths);
        if (!VAR_9 || FUNC_8(VAR_9, VAR_3) != 0)
            FUNC_2 (VAR_1->active_paths, FUNC_3(VAR_3));

        FUNC_6 (&VAR_1->ap_q_lock);
    }
}
