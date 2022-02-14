
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dwMciTimeFormat; TYPE_1__* lpWaveFormat; } ;
typedef TYPE_2__ WINE_MCIWAVE ;
struct TYPE_4__ {int nSamplesPerSec; int nAvgBytesPerSec; } ;
typedef int DWORD ;





 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,int ,int ,int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static DWORD FUNC_3(WINE_MCIWAVE* VAR_0, DWORD VAR_1)
{
    DWORD VAR_2 = 0;

    switch (VAR_0->dwMciTimeFormat) {
    case 129:
 VAR_2 = FUNC_0(VAR_1,1000,VAR_0->lpWaveFormat->nAvgBytesPerSec);
 break;
    case 130:
 VAR_2 = VAR_1;
 break;
    case 128:
 VAR_2 = FUNC_0(VAR_1,VAR_0->lpWaveFormat->nSamplesPerSec,VAR_0->lpWaveFormat->nAvgBytesPerSec);
 break;
    default:
 FUNC_2("Bad time format %u!\n", VAR_0->dwMciTimeFormat);
    }
    FUNC_1("val=%u=0x%08x [tf=%u] => ret=%u\n", VAR_1, VAR_1, VAR_0->dwMciTimeFormat, VAR_2);
    return VAR_2;
}
