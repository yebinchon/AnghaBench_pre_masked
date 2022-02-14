
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NBCmdQueue {int cs; } ;
typedef int UCHAR ;
typedef int PNCB ;


 scalar_t__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct NBCmdQueue*,int ) ;
 int * FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,struct NBCmdQueue*,...) ;

UCHAR FUNC_7(struct NBCmdQueue *VAR_3, PNCB VAR_4, UCHAR VAR_5)
{
    UCHAR VAR_6;
    PNCB *VAR_7;

    FUNC_6(": queue %p, ncb %p\n", VAR_3, VAR_4);

    if (!VAR_3)
        return VAR_0;
    if (!VAR_4)
        return VAR_2;

    FUNC_1(&VAR_3->cs);
    VAR_7 = FUNC_3(VAR_3, VAR_4);
    if (VAR_7)
    {
        if (*FUNC_0(*VAR_7))
            FUNC_5(*FUNC_0(*VAR_7));
        else
            *VAR_7 = *FUNC_4(*VAR_7);
        VAR_6 = VAR_1;
    }
    else
        VAR_6 = VAR_2;
    FUNC_2(&VAR_3->cs);
    FUNC_6("returning 0x%02x\n", VAR_6);
    return VAR_6;
}
