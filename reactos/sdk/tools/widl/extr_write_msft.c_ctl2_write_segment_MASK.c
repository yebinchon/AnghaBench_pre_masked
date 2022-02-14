
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* typelib_segdir; int * typelib_segment_data; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_4__ {int length; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(msft_typelib_t *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0->typelib_segment_data[VAR_1], VAR_0->typelib_segdir[VAR_1].length);
}
