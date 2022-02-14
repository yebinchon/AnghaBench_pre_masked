
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {double estimated_vsync_jitter; int lock; } ;
struct vo {struct vo_internal* in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

double FUNC_2(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;
    FUNC_0(&VAR_1->lock);
    double VAR_2 = VAR_1->estimated_vsync_jitter;
    FUNC_1(&VAR_1->lock);
    return VAR_2;
}
