
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tmp_buffer_len; int freqAccNext; int buflen; int freqAcc; int freqneeded; } ;
typedef TYPE_1__ IDirectSoundBufferImpl ;


 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(IDirectSoundBufferImpl *VAR_0)
{
 if (!VAR_0->freqneeded) return;
 VAR_0->freqAcc = VAR_0->freqAccNext;
 VAR_0->tmp_buffer_len = FUNC_0(VAR_0, VAR_0->buflen, 0, &VAR_0->freqAccNext);
 FUNC_1("New freqadjust: %04x, new buflen: %d\n", VAR_0->freqAccNext, VAR_0->tmp_buffer_len);
}
