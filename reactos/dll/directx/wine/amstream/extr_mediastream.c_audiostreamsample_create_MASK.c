
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IAudioStreamSample_iface; int * audio_data; int * parent; } ;
typedef int IMediaStream ;
typedef TYPE_2__ IAudioStreamSampleImpl ;
typedef int IAudioStreamSample ;
typedef int IAudioMediaStream ;
typedef int IAudioData ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (char*,int **) ;

__attribute__((used)) static HRESULT FUNC_3(IAudioMediaStream *VAR_4, IAudioData *VAR_5, IAudioStreamSample **VAR_6)
{
    IAudioStreamSampleImpl *VAR_7;

    FUNC_2("(%p)\n", VAR_6);

    VAR_7 = FUNC_1(FUNC_0(), VAR_2, sizeof(IAudioStreamSampleImpl));
    if (!VAR_7)
        return VAR_1;

    VAR_7->IAudioStreamSample_iface.lpVtbl = &VAR_0;
    VAR_7->ref = 1;
    VAR_7->parent = (IMediaStream*)VAR_4;
    VAR_7->audio_data = VAR_5;

    *VAR_6 = (IAudioStreamSample*)&VAR_7->IAudioStreamSample_iface;

    return VAR_3;
}
