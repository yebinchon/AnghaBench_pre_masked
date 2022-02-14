
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {TYPE_1__* pwfx; } ;
struct TYPE_8__ {TYPE_2__* pwfx; int (* convert ) (int const*,int *,int ,int ,int ,int ,int ) ;TYPE_4__* device; } ;
struct TYPE_7__ {int wBitsPerSample; int nChannels; } ;
struct TYPE_6__ {int wBitsPerSample; int nChannels; } ;
typedef int INT ;
typedef TYPE_3__ IDirectSoundBufferImpl ;
typedef TYPE_4__ DirectSoundDevice ;
typedef int BYTE ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int const*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int const*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int const*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int const*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int const*,int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_6(const IDirectSoundBufferImpl *VAR_0, const BYTE *VAR_1, BYTE *VAR_2,
        UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7)
{
    DirectSoundDevice *VAR_8 = VAR_0->device;
    INT VAR_9 = VAR_0->pwfx->wBitsPerSample / 8, VAR_10 = VAR_8->pwfx->wBitsPerSample / 8;

    if (VAR_8->pwfx->nChannels == VAR_0->pwfx->nChannels ||
        (VAR_8->pwfx->nChannels == 2 && VAR_0->pwfx->nChannels == 6) ||
        (VAR_8->pwfx->nChannels == 8 && VAR_0->pwfx->nChannels == 2) ||
        (VAR_8->pwfx->nChannels == 6 && VAR_0->pwfx->nChannels == 2)) {
        VAR_0->convert(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        if (VAR_8->pwfx->nChannels == 2 || VAR_0->pwfx->nChannels == 2)
            VAR_0->convert(VAR_1 + VAR_9, VAR_2 + VAR_10, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        return;
    }

    if (VAR_8->pwfx->nChannels == 1 && VAR_0->pwfx->nChannels == 2)
    {
        VAR_0->convert(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        return;
    }

    if (VAR_8->pwfx->nChannels == 2 && VAR_0->pwfx->nChannels == 1)
    {
        VAR_0->convert(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        VAR_0->convert(VAR_1, VAR_2 + VAR_10, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        return;
    }

    FUNC_0("Unable to remap channels: device=%u, buffer=%u\n", VAR_8->pwfx->nChannels,
            VAR_0->pwfx->nChannels);
}
