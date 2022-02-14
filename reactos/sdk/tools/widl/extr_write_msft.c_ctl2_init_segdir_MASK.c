
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* typelib_segdir; } ;
typedef TYPE_1__ msft_typelib_t ;
struct TYPE_5__ {int offset; int res08; int res0c; scalar_t__ length; } ;
typedef TYPE_2__ MSFT_pSeg ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(
 msft_typelib_t *VAR_2)
{
    int VAR_3;
    MSFT_pSeg *VAR_4;

    VAR_4 = &VAR_2->typelib_segdir[VAR_1];

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 VAR_4[VAR_3].offset = -1;
 VAR_4[VAR_3].length = 0;
 VAR_4[VAR_3].res08 = -1;
 VAR_4[VAR_3].res0c = 0x0f;
    }
}
