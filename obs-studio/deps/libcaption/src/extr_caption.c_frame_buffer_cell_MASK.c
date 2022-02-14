
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int caption_frame_cell_t ;
struct TYPE_3__ {int ** cell; } ;
typedef TYPE_1__ caption_frame_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static caption_frame_cell_t* FUNC_0(caption_frame_buffer_t* VAR_2, int VAR_3, int VAR_4)
{
    if (!VAR_2 || 0 > VAR_3 || VAR_1 <= VAR_3 || 0 > VAR_4 || VAR_0 <= VAR_4) {
        return 0;
    }

    return &VAR_2->cell[VAR_3][VAR_4];
}
