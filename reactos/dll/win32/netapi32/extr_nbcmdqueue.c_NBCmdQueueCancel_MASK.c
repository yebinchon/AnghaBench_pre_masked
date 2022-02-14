
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct NBCmdQueue {int cs; } ;
typedef scalar_t__ UCHAR ;
struct TYPE_8__ {scalar_t__ ncb_retcode; } ;
typedef TYPE_1__* PNCB ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 TYPE_1__** FUNC_5 (struct NBCmdQueue*,TYPE_1__*) ;
 TYPE_1__** FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*,struct NBCmdQueue*,...) ;
 int FUNC_8 (int ,int ) ;

UCHAR FUNC_9(struct NBCmdQueue *VAR_6, PNCB VAR_7)
{
    UCHAR VAR_8;
    PNCB *VAR_9;

    FUNC_7(": queue %p, ncb %p\n", VAR_6, VAR_7);

    if (!VAR_6)
        return VAR_2;
    if (!VAR_7)
        return VAR_5;

    FUNC_3(&VAR_6->cs);
    VAR_9 = FUNC_5(VAR_6, VAR_7);
    if (VAR_9)
    {
        *FUNC_0(*VAR_9) = FUNC_2(((void*)0), VAR_0, VAR_0, ((void*)0));
        FUNC_8(*FUNC_0(*VAR_9), VAR_1);
        FUNC_1(*FUNC_0(*VAR_9));
        *VAR_9 = *FUNC_6(*VAR_9);
        if (VAR_7->ncb_retcode == VAR_4)
            VAR_8 = VAR_4;
        else
            VAR_8 = VAR_3;
    }
    else
        VAR_8 = VAR_5;
    FUNC_4(&VAR_6->cs);
    FUNC_7("returning 0x%02x\n", VAR_8);
    return VAR_8;
}
