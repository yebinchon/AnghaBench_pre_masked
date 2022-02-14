
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeval; int inactivity_interval; } ;
struct TYPE_3__ {scalar_t__ inactivity_timeout; } ;
struct context {TYPE_2__ c2; TYPE_1__ options; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct context *VAR_1)
{
    void FUNC_2(struct context *VAR_2);

    if (VAR_1->options.inactivity_timeout
        && FUNC_0(&VAR_1->c2.inactivity_interval, &VAR_1->c2.timeval, VAR_0))
    {
        FUNC_2(VAR_1);
    }
}
