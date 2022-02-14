
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int freqAdjust; int freqAccNext; int freqAcc; TYPE_3__* device; TYPE_1__* pwfx; } ;
struct TYPE_8__ {TYPE_2__* pwfx; } ;
struct TYPE_7__ {scalar_t__ nBlockAlign; } ;
struct TYPE_6__ {scalar_t__ nBlockAlign; } ;
typedef TYPE_4__ IDirectSoundBufferImpl ;
typedef int DWORD64 ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int) ;

DWORD FUNC_1(const IDirectSoundBufferImpl *VAR_1, DWORD VAR_2, DWORD VAR_3, DWORD* VAR_4)
{
 DWORD64 VAR_5 = VAR_2 / VAR_1->pwfx->nBlockAlign;
 DWORD64 VAR_6 = VAR_1->freqAdjust;
 DWORD64 VAR_7, VAR_8;

 if (VAR_2 < VAR_3)
  VAR_8 = VAR_1->freqAccNext;
 else VAR_8 = VAR_1->freqAcc;
 VAR_7 = (VAR_5 << VAR_0) + (VAR_6 - 1 - VAR_8);
 VAR_7 /= VAR_6;
 if (VAR_4)
 {
  DWORD64 VAR_9 = VAR_7 * VAR_6 + VAR_8;
  FUNC_0(VAR_9 >= VAR_5 << VAR_0);
  VAR_9 -= VAR_5 << VAR_0;
  *VAR_4 = (DWORD)VAR_9;
  FUNC_0(*VAR_4 < VAR_1->freqAdjust);
 }
 return (DWORD)VAR_7 * VAR_1->device->pwfx->nBlockAlign;
}
