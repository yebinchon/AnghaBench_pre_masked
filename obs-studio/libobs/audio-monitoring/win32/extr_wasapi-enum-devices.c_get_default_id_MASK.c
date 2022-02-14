
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_14__ {TYPE_2__* lpVtbl; } ;
struct TYPE_13__ {TYPE_1__* lpVtbl; } ;
struct TYPE_12__ {int (* Release ) (TYPE_4__*) ;int (* GetId ) (TYPE_4__*,int **) ;} ;
struct TYPE_11__ {int (* Release ) (TYPE_3__*) ;int (* GetDefaultAudioEndpoint ) (TYPE_3__*,int ,int ,TYPE_4__**) ;} ;
typedef TYPE_3__ IMMDeviceEnumerator ;
typedef TYPE_4__ IMMDevice ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,TYPE_3__**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 char* FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,char**) ;
 int FUNC_5 (TYPE_3__*,int ,int ,TYPE_4__**) ;
 int FUNC_6 (TYPE_4__*,int **) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_9(char **VAR_5)
{
 IMMDeviceEnumerator *VAR_6 = ((void*)0);
 IMMDevice *VAR_7 = ((void*)0);
 WCHAR *VAR_8 = ((void*)0);
 HRESULT VAR_9;

 if (*VAR_5)
  return;

 VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
         &VAR_2, &VAR_6);
 if (FUNC_2(VAR_9)) {
  goto fail;
 }

 VAR_9 = VAR_6->lpVtbl->GetDefaultAudioEndpoint(VAR_6, VAR_4, VAR_3,
          &VAR_7);
 if (FUNC_2(VAR_9)) {
  goto fail;
 }

 VAR_9 = VAR_7->lpVtbl->GetId(VAR_7, &VAR_8);
 if (FUNC_2(VAR_9)) {
  goto fail;
 }

 FUNC_4(VAR_8, 0, VAR_5);

fail:
 if (!*VAR_5)
  *VAR_5 = FUNC_3(1);
 if (VAR_6)
  VAR_6->lpVtbl->Release(VAR_6);
 if (VAR_7)
  VAR_7->lpVtbl->Release(VAR_7);
 if (VAR_8)
  FUNC_1(VAR_8);
}
