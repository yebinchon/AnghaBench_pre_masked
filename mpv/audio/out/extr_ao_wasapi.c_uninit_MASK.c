
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {int deviceID; scalar_t__ hAudioThread; scalar_t__ hWake; scalar_t__ hInitDone; } ;
struct ao {struct wasapi_state* priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct ao*,char*) ;
 int FUNC_3 (struct ao*,char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct ao*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ao*) ;

__attribute__((used)) static void FUNC_9(struct ao *VAR_3)
{
    FUNC_2(VAR_3, "Uninit wasapi\n");
    struct wasapi_state *VAR_4 = VAR_3->priv;
    if (VAR_4->hWake)
        FUNC_6(VAR_3, VAR_2);

    if (VAR_4->hAudioThread &&
        FUNC_5(VAR_4->hAudioThread, VAR_0) != VAR_1)
    {
        FUNC_3(VAR_3, "Unexpected return value from WaitForSingleObject "
               "while waiting for audio thread to terminate\n");
    }

    FUNC_4(VAR_4->hInitDone, FUNC_0(VAR_4->hInitDone));
    FUNC_4(VAR_4->hWake, FUNC_0(VAR_4->hWake));
    FUNC_4(VAR_4->hAudioThread,FUNC_0(VAR_4->hAudioThread));

    FUNC_8(VAR_3);

    FUNC_7(VAR_4->deviceID);

    FUNC_1();
    FUNC_2(VAR_3, "Uninit wasapi done\n");
}
