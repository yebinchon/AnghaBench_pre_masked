
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nSamplesPerSec; } ;
struct TYPE_6__ {TYPE_1__ Format; } ;
typedef TYPE_2__ WAVEFORMATEXTENSIBLE ;
typedef int DWORD ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(WAVEFORMATEXTENSIBLE *VAR_0,
                                         DWORD VAR_1)
{
    VAR_0->Format.nSamplesPerSec = VAR_1;
    FUNC_0(VAR_0);
}
