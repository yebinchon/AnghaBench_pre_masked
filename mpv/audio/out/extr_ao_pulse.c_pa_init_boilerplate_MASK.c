
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {char* cfg_host; int mainloop; scalar_t__ context; int wakeup; int wakeup_lock; } ;
struct ao {scalar_t__ probing; int client_name; struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ao*,char*) ;
 int FUNC_2 (struct ao*,char*,long) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ,struct ao*) ;
 int FUNC_11 (scalar_t__,int ,struct ao*) ;
 long FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int VAR_3 ;
 int FUNC_21 (struct ao*) ;

__attribute__((used)) static int FUNC_22(struct ao *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;
    char *VAR_6 = VAR_5->cfg_host && VAR_5->cfg_host[0] ? VAR_5->cfg_host : ((void*)0);
    bool VAR_7 = 0;

    FUNC_20(&VAR_5->wakeup_lock, ((void*)0));
    FUNC_19(&VAR_5->wakeup, ((void*)0));

    if (!(VAR_5->mainloop = FUNC_15())) {
        FUNC_1(VAR_4, "Failed to allocate main loop\n");
        goto fail;
    }

    if (FUNC_16(VAR_5->mainloop) < 0)
        goto fail;

    FUNC_14(VAR_5->mainloop);
    VAR_7 = 1;

    if (!(VAR_5->context = FUNC_9(FUNC_13(
                                         VAR_5->mainloop), VAR_4->client_name)))
    {
        FUNC_1(VAR_4, "Failed to allocate context\n");
        goto fail;
    }

    FUNC_2(VAR_4, "Library version: %s\n", FUNC_12());
    FUNC_2(VAR_4, "Proto: %lu\n",
        (long)FUNC_6(VAR_5->context));
    FUNC_2(VAR_4, "Server proto: %lu\n",
        (long)FUNC_7(VAR_5->context));

    FUNC_10(VAR_5->context, VAR_2, VAR_4);
    FUNC_11(VAR_5->context, VAR_3, VAR_4);

    if (FUNC_4(VAR_5->context, VAR_6, 0, ((void*)0)) < 0)
        goto fail;


    while (1) {
        int VAR_8 = FUNC_8(VAR_5->context);
        if (VAR_8 == VAR_0)
            break;
        if (!FUNC_3(VAR_8))
            goto fail;
        FUNC_18(VAR_5->mainloop);
    }

    FUNC_17(VAR_5->mainloop);
    return 0;

fail:
    if (VAR_7)
        FUNC_17(VAR_5->mainloop);

    if (VAR_5->context) {
        FUNC_14(VAR_5->mainloop);
        if (!(FUNC_5(VAR_5->context) == VAR_1
              && VAR_4->probing))
            FUNC_0("Init failed");
        FUNC_17(VAR_5->mainloop);
    }
    FUNC_21(VAR_4);
    return -1;
}
