
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int opj_marker_info_t ;
struct TYPE_4__ {int maxmarknum; int * tile_index; int * marker; scalar_t__ marknum; } ;
typedef TYPE_1__ opj_codestream_index_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static opj_codestream_index_t* FUNC_2(void)
{
    opj_codestream_index_t* VAR_0 = (opj_codestream_index_t*)
                                         FUNC_0(1, sizeof(opj_codestream_index_t));
    if (!VAR_0) {
        return ((void*)0);
    }

    VAR_0->maxmarknum = 100;
    VAR_0->marknum = 0;
    VAR_0->marker = (opj_marker_info_t*)
                         FUNC_0(VAR_0->maxmarknum, sizeof(opj_marker_info_t));
    if (!VAR_0-> marker) {
        FUNC_1(VAR_0);
        return ((void*)0);
    }

    VAR_0->tile_index = ((void*)0);

    return VAR_0;
}
