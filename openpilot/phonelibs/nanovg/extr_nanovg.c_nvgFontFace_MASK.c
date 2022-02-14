
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fs; } ;
struct TYPE_6__ {int fontId; } ;
typedef TYPE_1__ NVGstate ;
typedef TYPE_2__ NVGcontext ;


 int FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

void FUNC_2(NVGcontext* VAR_0, const char* VAR_1)
{
 NVGstate* VAR_2 = FUNC_1(VAR_0);
 VAR_2->fontId = FUNC_0(VAR_0->fs, VAR_1);
}
