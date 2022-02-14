
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ AVInputFormat ;


 int FUNC_0 (int *,char**,int,int *) ;
 TYPE_1__* FUNC_1 (void**) ;
 int * FUNC_2 (int *,int ) ;

char **FUNC_3(void)
{
    char **VAR_0 = ((void*)0);
    void *VAR_1 = ((void*)0);
    int VAR_2 = 0;
    for (;;) {
        const AVInputFormat *VAR_3 = FUNC_1(&VAR_1);
        if (!VAR_3)
            break;
        FUNC_0(((void*)0), VAR_0, VAR_2, FUNC_2(((void*)0), VAR_3->name));
    }
    FUNC_0(((void*)0), VAR_0, VAR_2, ((void*)0));
    return VAR_0;
}
