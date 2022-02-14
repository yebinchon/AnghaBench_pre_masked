
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int end_count; int start_count; int id_delta; int id_range_offset; } ;
typedef TYPE_1__ cmap_format_4_seg ;
struct TYPE_6__ {int * end_count; int seg_countx2; } ;
typedef TYPE_2__ cmap_format_4 ;
typedef size_t USHORT ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(cmap_format_4 *VAR_0, USHORT VAR_1, cmap_format_4_seg *VAR_2)
{
    USHORT VAR_3 = FUNC_0(VAR_0->seg_countx2) / 2;
    VAR_2->end_count = FUNC_0(VAR_0->end_count[VAR_1]);
    VAR_2->start_count = FUNC_0(VAR_0->end_count[VAR_3 + 1 + VAR_1]);
    VAR_2->id_delta = FUNC_0(VAR_0->end_count[2 * VAR_3 + 1 + VAR_1]);
    VAR_2->id_range_offset = FUNC_0(VAR_0->end_count[3 * VAR_3 + 1 + VAR_1]);
}
