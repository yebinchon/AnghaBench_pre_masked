
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float tessTol; float distTol; float fringeWidth; float devicePxRatio; } ;
typedef TYPE_1__ NVGcontext ;



__attribute__((used)) static void FUNC_0(NVGcontext* VAR_0, float VAR_1)
{
 VAR_0->tessTol = 0.25f / VAR_1;
 VAR_0->distTol = 0.01f / VAR_1;
 VAR_0->fringeWidth = 1.0f / VAR_1;
 VAR_0->devicePxRatio = VAR_1;
}
