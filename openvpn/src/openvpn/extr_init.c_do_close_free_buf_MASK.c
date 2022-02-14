
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffers_owned; int * buffers; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct context *VAR_0)
{
    if (VAR_0->c2.buffers_owned)
    {
        FUNC_0(VAR_0->c2.buffers);
        VAR_0->c2.buffers = ((void*)0);
        VAR_0->c2.buffers_owned = 0;
    }
}
