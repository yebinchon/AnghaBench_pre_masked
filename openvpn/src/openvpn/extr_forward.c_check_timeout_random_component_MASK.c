
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; } ;
struct TYPE_3__ {scalar_t__ update_timeout_random_component; int timeout_random_component; TYPE_2__ timeval; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (struct context*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct context *VAR_1)
{
    if (VAR_0 >= VAR_1->c2.update_timeout_random_component)
    {
        FUNC_0(VAR_1);
    }
    if (VAR_1->c2.timeval.tv_sec >= 1)
    {
        FUNC_1(&VAR_1->c2.timeval, &VAR_1->c2.timeout_random_component);
    }
}
