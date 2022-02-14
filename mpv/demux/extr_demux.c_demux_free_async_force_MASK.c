
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_internal {TYPE_1__* d_user; } ;
struct demux_free_async_state {int dummy; } ;
struct TYPE_2__ {int cancel; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct demux_free_async_state *VAR_0)
{
    struct demux_internal *VAR_1 = (struct demux_internal *)VAR_0;

    FUNC_0(VAR_1->d_user->cancel);
}
