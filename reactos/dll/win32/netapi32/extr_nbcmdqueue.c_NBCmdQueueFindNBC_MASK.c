
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NBCmdQueue {scalar_t__ head; } ;
typedef scalar_t__ PNCB ;


 scalar_t__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static PNCB *FUNC_1(struct NBCmdQueue *VAR_0, PNCB VAR_1)
{
    PNCB *VAR_2;

    if (!VAR_0 || !VAR_1)
        VAR_2 = ((void*)0);
    else
    {
        VAR_2 = &VAR_0->head;
        while (VAR_2 && *VAR_2 != VAR_1)
            VAR_2 = FUNC_0(*VAR_2);
    }
    return VAR_2;
}
