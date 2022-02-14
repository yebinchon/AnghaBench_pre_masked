
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dvMaxZ; int dvMinZ; int dvMaxY; int dvMaxX; int dvScaleY; int dvScaleX; int dwHeight; int dwWidth; int dwY; int dwX; int dwSize; } ;
typedef TYPE_1__ D3DVIEWPORT ;


 int FUNC_0 (char*,int ,int ,...) ;

__attribute__((used)) static void FUNC_1(const D3DVIEWPORT *VAR_0)
{
    FUNC_0("    - dwSize = %d   dwX = %d   dwY = %d\n",
            VAR_0->dwSize, VAR_0->dwX, VAR_0->dwY);
    FUNC_0("    - dwWidth = %d   dwHeight = %d\n",
            VAR_0->dwWidth, VAR_0->dwHeight);
    FUNC_0("    - dvScaleX = %f   dvScaleY = %f\n",
            VAR_0->dvScaleX, VAR_0->dvScaleY);
    FUNC_0("    - dvMaxX = %f   dvMaxY = %f\n",
            VAR_0->dvMaxX, VAR_0->dvMaxY);
    FUNC_0("    - dvMinZ = %f   dvMaxZ = %f\n",
            VAR_0->dvMinZ, VAR_0->dvMaxZ);
}
