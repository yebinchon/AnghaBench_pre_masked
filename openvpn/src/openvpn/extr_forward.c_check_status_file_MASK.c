
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeval; } ;
struct TYPE_3__ {scalar_t__ status_output; } ;
struct context {TYPE_2__ c2; TYPE_1__ c1; } ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct context *VAR_0)
{
    void FUNC_2(struct context *VAR_1);

    if (VAR_0->c1.status_output)
    {
        if (FUNC_0(VAR_0->c1.status_output, &VAR_0->c2.timeval))
        {
            FUNC_2(VAR_0);
        }
    }
}
