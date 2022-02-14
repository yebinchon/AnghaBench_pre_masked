
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {int command_id; } ;
struct TYPE_6__ {int action; TYPE_1__ data; } ;
typedef TYPE_2__ ReorderBufferChange ;
typedef int ReorderBuffer ;
typedef int CommandId ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*) ;

void
FUNC_2(ReorderBuffer *VAR_1, TransactionId VAR_2,
        XLogRecPtr VAR_3, CommandId VAR_4)
{
 ReorderBufferChange *VAR_5 = FUNC_0(VAR_1);

 VAR_5->data.command_id = VAR_4;
 VAR_5->action = VAR_0;

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
}
