
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int obs_enum_audio_device_cb ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {TYPE_1__* lpVtbl; } ;
struct TYPE_10__ {int (* GetCount ) (TYPE_2__*,scalar_t__*) ;int (* EnumAudioEndpoints ) (TYPE_2__*,int ,int ,TYPE_2__**) ;} ;
typedef TYPE_2__ IMMDeviceEnumerator ;
typedef TYPE_2__ IMMDeviceCollection ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,TYPE_2__**) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,void*,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*,scalar_t__*) ;

void FUNC_6(obs_enum_audio_device_cb VAR_5, void *VAR_6)
{
 IMMDeviceEnumerator *VAR_7 = ((void*)0);
 IMMDeviceCollection *VAR_8 = ((void*)0);
 UINT VAR_9;
 HRESULT VAR_10;

 VAR_10 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
         &VAR_3, &VAR_7);
 if (FUNC_1(VAR_10)) {
  goto fail;
 }

 VAR_10 = VAR_7->lpVtbl->EnumAudioEndpoints(
  VAR_7, VAR_4, VAR_2, &VAR_8);
 if (FUNC_1(VAR_10)) {
  goto fail;
 }

 VAR_10 = VAR_8->lpVtbl->GetCount(VAR_8, &VAR_9);
 if (FUNC_1(VAR_10)) {
  goto fail;
 }

 for (UINT VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  if (!FUNC_2(VAR_5, VAR_6, VAR_8, VAR_11)) {
   break;
  }
 }

fail:
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
}
