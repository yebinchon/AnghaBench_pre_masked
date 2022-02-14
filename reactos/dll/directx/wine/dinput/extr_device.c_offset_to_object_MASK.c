
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* offsets; TYPE_1__* wine_df; } ;
struct TYPE_4__ {int dwNumObjs; } ;
typedef TYPE_2__ DataFormat ;



__attribute__((used)) static int FUNC_0(const DataFormat *VAR_0, int VAR_1)
{
    int VAR_2;

    if (!VAR_0->offsets) return -1;

    for (VAR_2 = 0; VAR_2 < VAR_0->wine_df->dwNumObjs; VAR_2++)
        if (VAR_0->offsets[VAR_2] == VAR_1) return VAR_2;

    return -1;
}
