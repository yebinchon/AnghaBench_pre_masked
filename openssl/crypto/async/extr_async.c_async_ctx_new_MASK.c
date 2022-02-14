
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ blocked; int * currjob; int dispatcher; } ;
typedef TYPE_1__ async_ctx ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static async_ctx *FUNC_6(void)
{
    async_ctx *VAR_4;

    if (!FUNC_5(((void*)0), ((void*)0), VAR_2))
        return ((void*)0);

    VAR_4 = FUNC_3(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }

    FUNC_4(&VAR_4->dispatcher);
    VAR_4->currjob = ((void*)0);
    VAR_4->blocked = 0;
    if (!FUNC_1(&VAR_3, VAR_4))
        goto err;

    return VAR_4;
err:
    FUNC_2(VAR_4);

    return ((void*)0);
}
