
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwMicroSecPerFrame; } ;
struct TYPE_5__ {int dwMciTimeFormat; TYPE_1__ mah; } ;
typedef TYPE_2__ WINE_MCIAVI ;
typedef int DWORD ;




 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (char*,int) ;

DWORD FUNC_2(WINE_MCIAVI* VAR_0, DWORD VAR_1)
{
    DWORD VAR_2 = 0;

    switch (VAR_0->dwMciTimeFormat) {
    case 128:
 VAR_2 = (VAR_1 * 1000) / VAR_0->mah.dwMicroSecPerFrame;
 break;
    case 129:
 VAR_2 = VAR_1;
 break;
    default:
 FUNC_1("Bad time format %u!\n", VAR_0->dwMciTimeFormat);
    }
    FUNC_0("val=%u=0x%08x [tf=%u] => ret=%u\n", VAR_1, VAR_1, VAR_0->dwMciTimeFormat, VAR_2);
    return VAR_2;
}
