
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cbSize; } ;
typedef TYPE_3__ WAVEFORMATEX ;
struct TYPE_16__ {int (* pGetAudioEndpoint ) (int *,int *,int **) ;} ;
struct TYPE_15__ {int flow; int devguid; int IMMDevice_iface; } ;
struct TYPE_11__ {int * pBlobData; scalar_t__ cbSize; } ;
struct TYPE_12__ {TYPE_1__ blob; } ;
struct TYPE_14__ {TYPE_2__ u; int vt; int member_0; } ;
typedef TYPE_4__ PROPVARIANT ;
typedef TYPE_5__ MMDevice ;
typedef int IAudioClient ;
typedef int HRESULT ;
typedef int BYTE ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__ VAR_5 ;
 int FUNC_5 (int *,int *,int **) ;

__attribute__((used)) static HRESULT FUNC_6(MMDevice *VAR_6)
{
    HRESULT VAR_7;
    IAudioClient *VAR_8;
    WAVEFORMATEX *VAR_9;
    PROPVARIANT VAR_10 = { &VAR_4 };

    VAR_7 = VAR_5.pGetAudioEndpoint(&VAR_6->devguid, &VAR_6->IMMDevice_iface, &VAR_8);
    if(FUNC_1(VAR_7))
        return VAR_7;

    VAR_7 = FUNC_2(VAR_8, &VAR_9);
    if(FUNC_1(VAR_7)){
        FUNC_3(VAR_8);
        return VAR_7;
    }

    FUNC_3(VAR_8);

    VAR_10.vt = VAR_3;
    VAR_10.u.blob.cbSize = sizeof(WAVEFORMATEX) + VAR_9->cbSize;
    VAR_10.u.blob.pBlobData = (BYTE*)VAR_9;
    FUNC_4(&VAR_6->devguid, VAR_6->flow,
            &VAR_0, &VAR_10);
    FUNC_4(&VAR_6->devguid, VAR_6->flow,
            &VAR_1, &VAR_10);
    FUNC_0(VAR_9);

    return VAR_2;
}
