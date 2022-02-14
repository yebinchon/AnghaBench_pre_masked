
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct NBCmdQueue {int cs; TYPE_1__* head; } ;
typedef struct NBCmdQueue* UCHAR ;
struct TYPE_2__ {int ncb_command; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct NBCmdQueue*,TYPE_1__*) ;
 struct NBCmdQueue* VAR_0 ;
 struct NBCmdQueue* VAR_1 ;
 int FUNC_3 (char*,...) ;

UCHAR FUNC_4(struct NBCmdQueue *VAR_2)
{
    UCHAR VAR_3;

    FUNC_3(": queue %p\n", VAR_2);

    if (!VAR_2)
        return VAR_0;

    FUNC_0(&VAR_2->cs);
    while (VAR_2->head)
    {
        FUNC_3(": waiting for ncb %p (command 0x%02x)\n", VAR_2->head,
         VAR_2->head->ncb_command);
        FUNC_2(VAR_2, VAR_2->head);
    }
    FUNC_1(&VAR_2->cs);
    VAR_3 = VAR_1;
    FUNC_3("returning 0x%02x\n", VAR_3);
    return VAR_3;
}
