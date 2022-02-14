
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {double force_video_pts; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct osd_state *VAR_0, double VAR_1)
{
    FUNC_0(&VAR_0->lock);
    VAR_0->force_video_pts = VAR_1;
    FUNC_1(&VAR_0->lock);
}
