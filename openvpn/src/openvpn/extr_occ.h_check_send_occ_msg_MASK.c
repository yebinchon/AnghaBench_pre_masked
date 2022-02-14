
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ occ_op; int timeval; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (struct context*) ;
 int FUNC_1 (struct context*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct context *VAR_0)
{
    if (VAR_0->c2.occ_op >= 0)
    {
        if (!FUNC_0(VAR_0))
        {
            FUNC_1(VAR_0);
        }
        else
        {
            FUNC_2(&VAR_0->c2.timeval);
        }
    }
}
