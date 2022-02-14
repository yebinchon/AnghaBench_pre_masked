
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_video {int output_tex_valid; scalar_t__ frames_drawn; scalar_t__ surface_now; scalar_t__ surface_idx; TYPE_1__* surfaces; } ;
struct TYPE_2__ {int pts; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct gl_video *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2->surfaces[VAR_3].id = 0;
        VAR_2->surfaces[VAR_3].pts = VAR_0;
    }
    VAR_2->surface_idx = 0;
    VAR_2->surface_now = 0;
    VAR_2->frames_drawn = 0;
    VAR_2->output_tex_valid = 0;
}
