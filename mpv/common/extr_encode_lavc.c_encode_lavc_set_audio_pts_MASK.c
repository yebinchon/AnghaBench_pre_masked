
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encode_lavc_context {double last_audio_in_pts; int lock; scalar_t__ samples_since_last_pts; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct encode_lavc_context *VAR_0, double VAR_1)
{
    if (VAR_0) {
        FUNC_0(&VAR_0->lock);
        VAR_0->last_audio_in_pts = VAR_1;
        VAR_0->samples_since_last_pts = 0;
        FUNC_1(&VAR_0->lock);
    }
}
