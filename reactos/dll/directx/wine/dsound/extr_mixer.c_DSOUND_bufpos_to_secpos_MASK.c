
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int buflen; int tmp_buffer_len; scalar_t__ freqAccNext; scalar_t__ freqAdjust; TYPE_1__* pwfx; TYPE_2__* device; } ;
struct TYPE_8__ {int nBlockAlign; } ;
struct TYPE_7__ {TYPE_3__* pwfx; } ;
struct TYPE_6__ {int nBlockAlign; } ;
typedef TYPE_4__ IDirectSoundBufferImpl ;
typedef int DWORD64 ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int,int) ;

__attribute__((used)) static DWORD FUNC_1(const IDirectSoundBufferImpl *VAR_1, DWORD VAR_2)
{
 DWORD VAR_3 = VAR_1->device->pwfx->nBlockAlign, VAR_4 = VAR_1->pwfx->nBlockAlign, VAR_5;
 DWORD64 VAR_6;
 DWORD64 VAR_7;

 VAR_6 = VAR_2/VAR_3;
 VAR_7 = VAR_6 * (DWORD64)VAR_1->freqAdjust + (DWORD64)VAR_1->freqAccNext;
 VAR_7 = VAR_7 >> VAR_0;
 VAR_5 = (DWORD)VAR_7 * VAR_4;
 if (VAR_5 >= VAR_1->buflen)

  VAR_5 = VAR_1->buflen - VAR_4;
 FUNC_0("Converted %d/%d to %d/%d\n", VAR_2, VAR_1->tmp_buffer_len, VAR_5, VAR_1->buflen);
 return VAR_5;
}
