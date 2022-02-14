
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; int csFilter; } ;
struct TYPE_7__ {TYPE_1__ filter; int csRenderLock; } ;
struct TYPE_8__ {int in_loop; TYPE_2__ renderer; int blocked; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ DSoundRenderImpl ;


 int FUNC_0 (TYPE_3__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static HRESULT FUNC_4(DSoundRenderImpl *VAR_2)
{
    while (VAR_2->renderer.filter.state == VAR_1)
    {
        DWORD VAR_3, VAR_4;
        FUNC_0(VAR_2, &VAR_3, &VAR_4);
        if (VAR_3 == VAR_4)
            break;

        VAR_2->in_loop = 1;
        FUNC_2(&VAR_2->renderer.filter.csFilter);
        FUNC_2(&VAR_2->renderer.csRenderLock);
        FUNC_3(VAR_2->blocked, 10);
        FUNC_1(&VAR_2->renderer.csRenderLock);
        FUNC_1(&VAR_2->renderer.filter.csFilter);
        VAR_2->in_loop = 0;
    }

    return VAR_0;
}
