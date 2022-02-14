
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msgque_data {int qnum; int msq_id; TYPE_1__* messages; } ;
struct msg1 {scalar_t__ mtype; int mtext; } ;
struct TYPE_2__ {int msize; scalar_t__ mtype; int mtext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,scalar_t__*,int ,int ,int ) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(struct msgque_data *VAR_6)
{
 struct msg1 VAR_7;
 int VAR_8 = 0, VAR_9;

 while (1) {
  VAR_9 = FUNC_2(VAR_6->msq_id, &VAR_7.mtype, VAR_4,
    0, VAR_2);
  if (VAR_9 < 0) {
   if (VAR_5 == VAR_1)
    break;
   FUNC_3("Failed to read IPC message: %m\n");
   VAR_9 = -VAR_5;
   goto err;
  }
  if (VAR_9 != VAR_6->messages[VAR_8].msize) {
   FUNC_3("Wrong message size: %d (expected %d)\n", VAR_9,
      VAR_6->messages[VAR_8].msize);
   VAR_9 = -VAR_0;
   goto err;
  }
  if (VAR_7.mtype != VAR_6->messages[VAR_8].mtype) {
   FUNC_3("Wrong message type\n");
   VAR_9 = -VAR_0;
   goto err;
  }
  if (FUNC_0(VAR_7.mtext, VAR_6->messages[VAR_8].mtext, VAR_9)) {
   FUNC_3("Wrong message content\n");
   VAR_9 = -VAR_0;
   goto err;
  }
  VAR_8++;
 }

 if (VAR_8 != VAR_6->qnum) {
  FUNC_3("Wrong message number\n");
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_9 = 0;
err:
 if (FUNC_1(VAR_6->msq_id, VAR_3, ((void*)0))) {
  FUNC_3("Failed to destroy queue: %d\n", -VAR_5);
  return -VAR_5;
 }
 return VAR_9;
}
