
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inactivity_bytes; int inactivity_interval; } ;
struct TYPE_3__ {scalar_t__ inactivity_minimum_bytes; scalar_t__ inactivity_timeout; } ;
struct context {TYPE_2__ c2; TYPE_1__ options; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct context *VAR_0, const int VAR_1)
{
    if (VAR_0->options.inactivity_timeout)
    {
        VAR_0->c2.inactivity_bytes += VAR_1;
        if (VAR_0->c2.inactivity_bytes >= VAR_0->options.inactivity_minimum_bytes)
        {
            VAR_0->c2.inactivity_bytes = 0;
            FUNC_0(&VAR_0->c2.inactivity_interval);
        }
    }
}
