
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NBCmdQueue {int cs; scalar_t__ head; } ;
typedef int UCHAR ;
typedef scalar_t__ PNCB ;


 int ** FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__* FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,struct NBCmdQueue*,...) ;

UCHAR FUNC_5(struct NBCmdQueue *VAR_3, PNCB VAR_4)
{
    UCHAR VAR_5;

    FUNC_4(": queue %p, ncb %p\n", VAR_3, VAR_4);

    if (!VAR_3)
        return VAR_0;
    if (!VAR_4)
        return VAR_2;

    *FUNC_0(VAR_4) = ((void*)0);
    FUNC_1(&VAR_3->cs);
    *FUNC_3(VAR_4) = VAR_3->head;
    VAR_3->head = VAR_4;
    VAR_5 = VAR_1;
    FUNC_2(&VAR_3->cs);
    FUNC_4("returning 0x%02x\n", VAR_5);
    return VAR_5;
}
