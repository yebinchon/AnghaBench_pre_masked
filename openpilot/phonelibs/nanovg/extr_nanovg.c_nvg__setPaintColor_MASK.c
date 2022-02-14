
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float radius; float feather; void* outerColor; void* innerColor; int xform; } ;
typedef TYPE_1__ NVGpaint ;
typedef void* NVGcolor ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(NVGpaint* VAR_0, NVGcolor VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 FUNC_1(VAR_0->xform);
 VAR_0->radius = 0.0f;
 VAR_0->feather = 1.0f;
 VAR_0->innerColor = VAR_1;
 VAR_0->outerColor = VAR_1;
}
