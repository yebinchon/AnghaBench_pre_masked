
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tw; int th; TYPE_1__* tile; } ;
typedef TYPE_2__ opj_codestream_info_t ;
struct TYPE_4__ {int num_tps; } ;


 int FUNC_0 (int ,int) ;

int FUNC_1(opj_codestream_info_t VAR_0)
{
    int VAR_1 = 0, VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0.tw * VAR_0.th; VAR_2++) {
        VAR_1 = FUNC_0(VAR_0.tile[VAR_2].num_tps, VAR_1);
    }

    return VAR_1;
}
