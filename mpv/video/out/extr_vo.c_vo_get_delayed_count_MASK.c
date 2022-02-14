
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int lock; int delayed_count; } ;
struct vo {struct vo_internal* in; } ;
typedef int int64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int64_t FUNC_2(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;
    FUNC_0(&VAR_1->lock);
    int64_t VAR_2 = VAR_0->in->delayed_count;
    FUNC_1(&VAR_1->lock);
    return VAR_2;
}
