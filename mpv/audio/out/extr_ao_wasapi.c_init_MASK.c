
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {int opt_exclusive; int init_ok; void* hInitDone; int hAudioThread; int dispatch; void* hWake; scalar_t__ deviceID; int log; } ;
struct ao {int init_flags; int probing; int log; struct wasapi_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int *,struct ao*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ao*,char*) ;
 int FUNC_5 (struct ao*,char*) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (struct wasapi_state*) ;
 int FUNC_9 (int ,int ,struct ao*) ;
 int VAR_5 ;
 int FUNC_10 (struct ao*) ;
 int FUNC_11 (struct ao*,int) ;
 scalar_t__ FUNC_12 (struct ao*) ;

__attribute__((used)) static int FUNC_13(struct ao *VAR_6)
{
    FUNC_4(VAR_6, "Init wasapi\n");
    FUNC_1(((void*)0), VAR_2);

    struct wasapi_state *VAR_7 = VAR_6->priv;
    VAR_7->log = VAR_6->log;

    VAR_7->opt_exclusive |= VAR_6->init_flags & VAR_0;


    VAR_7->deviceID = FUNC_12(VAR_6);
    if (!VAR_7->deviceID) {
        FUNC_10(VAR_6);
        return -1;
    }


    if (VAR_7->deviceID)
        FUNC_11(VAR_6, 0);

    VAR_7->hInitDone = FUNC_2(((void*)0), VAR_3, VAR_3, ((void*)0));
    VAR_7->hWake = FUNC_2(((void*)0), VAR_3, VAR_3, ((void*)0));
    if (!VAR_7->hInitDone || !VAR_7->hWake) {
        FUNC_5(VAR_6, "Error creating events\n");
        FUNC_10(VAR_6);
        return -1;
    }

    VAR_7->dispatch = FUNC_8(VAR_7);
    FUNC_9(VAR_7->dispatch, VAR_5, VAR_6);

    VAR_7->init_ok = 0;
    VAR_7->hAudioThread = FUNC_3(((void*)0), 0, &VAR_1, VAR_6, 0, ((void*)0));
    if (!VAR_7->hAudioThread) {
        FUNC_5(VAR_6, "Failed to create audio thread\n");
        FUNC_10(VAR_6);
        return -1;
    }

    FUNC_7(VAR_7->hInitDone, VAR_4);
    FUNC_6(VAR_7->hInitDone,FUNC_0(VAR_7->hInitDone));
    if (!VAR_7->init_ok) {
        if (!VAR_6->probing)
            FUNC_5(VAR_6, "Received failure from audio thread\n");
        FUNC_10(VAR_6);
        return -1;
    }

    FUNC_4(VAR_6, "Init wasapi done\n");
    return 0;
}
