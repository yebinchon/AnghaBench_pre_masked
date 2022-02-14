
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* typelib_segdir; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_4__ {int length; int offset; } ;



__attribute__((used)) static int FUNC_0(msft_typelib_t *VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_0->typelib_segdir[VAR_2].length) {
 VAR_0->typelib_segdir[VAR_2].offset = VAR_1;
    } else {
 VAR_0->typelib_segdir[VAR_2].offset = -1;
    }

    return VAR_0->typelib_segdir[VAR_2].length;
}
