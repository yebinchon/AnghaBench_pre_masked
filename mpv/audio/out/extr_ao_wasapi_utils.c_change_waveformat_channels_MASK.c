
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_chmap {int num; } ;
struct TYPE_5__ {int nChannels; } ;
struct TYPE_6__ {int dwChannelMask; TYPE_1__ Format; } ;
typedef TYPE_2__ WAVEFORMATEXTENSIBLE ;


 int FUNC_0 (struct mp_chmap*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(WAVEFORMATEXTENSIBLE *VAR_0,
                                       struct mp_chmap *VAR_1)
{
    VAR_0->Format.nChannels = VAR_1->num;
    VAR_0->dwChannelMask = FUNC_0(VAR_1);
    FUNC_1(VAR_0);
}
