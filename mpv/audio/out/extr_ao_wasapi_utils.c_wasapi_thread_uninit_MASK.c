
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {int hTask; scalar_t__ pDevice; scalar_t__ pAudioClient; scalar_t__ pSessionControl; scalar_t__ pEndpointVolume; scalar_t__ pAudioVolume; scalar_t__ pAudioClock; scalar_t__ pRenderClient; } ;
struct ao {struct wasapi_state* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ao*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct ao *VAR_0)
{
    struct wasapi_state *VAR_1 = VAR_0->priv;
    FUNC_2(VAR_0, "Thread shutdown\n");

    if (VAR_1->pAudioClient)
        FUNC_1(VAR_1->pAudioClient);

    FUNC_4(VAR_1->pRenderClient);
    FUNC_4(VAR_1->pAudioClock);
    FUNC_4(VAR_1->pAudioVolume);
    FUNC_4(VAR_1->pEndpointVolume);
    FUNC_4(VAR_1->pSessionControl);
    FUNC_4(VAR_1->pAudioClient);
    FUNC_4(VAR_1->pDevice);

    FUNC_3(VAR_1->hTask, FUNC_0(VAR_1->hTask));

    FUNC_2(VAR_0, "Thread uninit done\n");
}
