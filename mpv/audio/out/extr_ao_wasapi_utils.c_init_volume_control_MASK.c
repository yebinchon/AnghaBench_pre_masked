
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {scalar_t__ share_mode; int pAudioVolume; int pEndpointVolume; scalar_t__ vol_hw_support; int pAudioClient; int pDevice; } ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,void**) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ,int *,void**) ;
 int FUNC_4 (struct wasapi_state*,char*) ;
 int FUNC_5 (struct wasapi_state*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct wasapi_state *VAR_4)
{
    HRESULT VAR_5;
    if (VAR_4->share_mode == VAR_0) {
        FUNC_4(VAR_4, "Activating pEndpointVolume interface\n");
        VAR_5 = FUNC_3(VAR_4->pDevice,
                                         &VAR_2,
                                         VAR_1, ((void*)0),
                                         (void **)&VAR_4->pEndpointVolume);
        FUNC_0(VAR_5);

        FUNC_4(VAR_4, "IAudioEndpointVolume::QueryHardwareSupport\n");
        VAR_5 = FUNC_2(VAR_4->pEndpointVolume,
                                                       &VAR_4->vol_hw_support);
        FUNC_0(VAR_5);
    } else {
        FUNC_4(VAR_4, "IAudioClient::Initialize pAudioVolume\n");
        VAR_5 = FUNC_1(VAR_4->pAudioClient,
                                     &VAR_3,
                                     (void **)&VAR_4->pAudioVolume);
        FUNC_0(VAR_5);
    }
    return;
exit_label:
    VAR_4->vol_hw_support = 0;
    FUNC_6(VAR_4->pEndpointVolume);
    FUNC_6(VAR_4->pAudioVolume);
    FUNC_5(VAR_4, "Error setting up volume control: %s\n",
            FUNC_7(VAR_5));
}
