
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dvMaxZ; int dvMinZ; int dvClipHeight; int dvClipWidth; int dvClipY; int dvClipX; int dwHeight; int dwWidth; int dwY; int dwX; int dwSize; } ;
typedef TYPE_1__ D3DVIEWPORT2 ;


 int FUNC_0 (char*,int ,int ,...) ;

__attribute__((used)) static void FUNC_1(const D3DVIEWPORT2 *VAR_0)
{
    FUNC_0("    - dwSize = %d   dwX = %d   dwY = %d\n",
            VAR_0->dwSize, VAR_0->dwX, VAR_0->dwY);
    FUNC_0("    - dwWidth = %d   dwHeight = %d\n",
            VAR_0->dwWidth, VAR_0->dwHeight);
    FUNC_0("    - dvClipX = %f   dvClipY = %f\n",
            VAR_0->dvClipX, VAR_0->dvClipY);
    FUNC_0("    - dvClipWidth = %f   dvClipHeight = %f\n",
            VAR_0->dvClipWidth, VAR_0->dvClipHeight);
    FUNC_0("    - dvMinZ = %f   dvMaxZ = %f\n",
            VAR_0->dvMinZ, VAR_0->dvMaxZ);
}
