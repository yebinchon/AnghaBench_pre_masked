
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cksize; } ;
struct TYPE_8__ {int dwMciTimeFormat; TYPE_2__* lpWaveFormat; TYPE_1__ ckWaveData; } ;
typedef TYPE_3__ WINE_MCIWAVE ;
struct TYPE_7__ {int nSamplesPerSec; int nAvgBytesPerSec; } ;
typedef int DWORD ;





 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int ,int ,int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static DWORD FUNC_4(WINE_MCIWAVE* VAR_0, DWORD VAR_1)
{
    DWORD VAR_2 = 0;

    switch (VAR_0->dwMciTimeFormat) {
    case 129:
 VAR_2 = FUNC_0(VAR_1,VAR_0->lpWaveFormat->nAvgBytesPerSec,1000);
 if (VAR_2 > VAR_0->ckWaveData.cksize &&
     VAR_1 == FUNC_3(VAR_0, VAR_0->ckWaveData.cksize))
     VAR_2 = VAR_0->ckWaveData.cksize;
 break;
    case 130:
 VAR_2 = VAR_1;
 break;
    case 128:
 VAR_2 = FUNC_0(VAR_1,VAR_0->lpWaveFormat->nAvgBytesPerSec,VAR_0->lpWaveFormat->nSamplesPerSec);
 break;
    default:
 FUNC_2("Bad time format %u!\n", VAR_0->dwMciTimeFormat);
    }
    FUNC_1("val=%u=0x%08x [tf=%u] => ret=%u\n", VAR_1, VAR_1, VAR_0->dwMciTimeFormat, VAR_2);
    return VAR_2;
}
