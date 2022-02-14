
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encode_lavc_context {int lock; void* discontinuity_pts_offset; void* audio_pts_offset; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct encode_lavc_context *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_0(&VAR_1->lock);

    VAR_1->audio_pts_offset = VAR_0;
    VAR_1->discontinuity_pts_offset = VAR_0;

    FUNC_1(&VAR_1->lock);
}
