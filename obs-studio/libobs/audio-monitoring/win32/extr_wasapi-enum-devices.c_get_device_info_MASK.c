
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int (* obs_enum_audio_device_cb ) (void*,char*,char*) ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_21__ {TYPE_1__* lpVtbl; } ;
struct TYPE_20__ {TYPE_2__* lpVtbl; } ;
struct TYPE_19__ {int * pwszVal; } ;
struct TYPE_18__ {int (* GetValue ) (TYPE_4__*,int *,TYPE_3__*) ;int (* OpenPropertyStore ) (TYPE_4__*,int ,TYPE_4__**) ;int (* GetId ) (TYPE_4__*,int **) ;} ;
struct TYPE_17__ {int (* Item ) (TYPE_5__*,int ,TYPE_4__**) ;} ;
typedef TYPE_3__ PROPVARIANT ;
typedef TYPE_4__ IPropertyStore ;
typedef TYPE_5__ IMMDeviceCollection ;
typedef TYPE_4__ IMMDevice ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,char*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,int ,TYPE_4__**) ;
 int FUNC_6 (TYPE_4__*,int **) ;
 int FUNC_7 (TYPE_4__*,int ,TYPE_4__**) ;
 int FUNC_8 (TYPE_4__*,int *,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_9(obs_enum_audio_device_cb VAR_2, void *VAR_3,
       IMMDeviceCollection *VAR_4, UINT VAR_5)
{
 IPropertyStore *VAR_6 = ((void*)0);
 IMMDevice *VAR_7 = ((void*)0);
 PROPVARIANT VAR_8;
 char VAR_9[512];
 WCHAR *VAR_10 = ((void*)0);
 char VAR_11[512];
 bool VAR_12 = 1;
 HRESULT VAR_13;

 VAR_13 = VAR_4->lpVtbl->Item(VAR_4, VAR_5, &VAR_7);
 if (FUNC_1(VAR_13)) {
  goto fail;
 }

 VAR_13 = VAR_7->lpVtbl->GetId(VAR_7, &VAR_10);
 if (FUNC_1(VAR_13)) {
  goto fail;
 }

 VAR_13 = VAR_7->lpVtbl->OpenPropertyStore(VAR_7, VAR_1, &VAR_6);
 if (FUNC_1(VAR_13)) {
  goto fail;
 }

 FUNC_2(&VAR_8);
 VAR_13 = VAR_6->lpVtbl->GetValue(VAR_6, &VAR_0,
         &VAR_8);
 if (FUNC_1(VAR_13)) {
  goto fail;
 }

 FUNC_3(VAR_10, 0, VAR_11, 512);
 FUNC_3(VAR_8.pwszVal, 0, VAR_9, 512);

 VAR_12 = VAR_2(VAR_3, VAR_9, VAR_11);

fail:
 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 if (VAR_10)
  FUNC_0(VAR_10);
 return VAR_12;
}
