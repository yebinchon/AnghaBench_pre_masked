
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct msqid_ds {int msg_qnum; int msg_qbytes; TYPE_1__ msg_perm; } ;
struct msgque_data {int msq_id; int qnum; TYPE_2__* messages; int qbytes; int mode; } ;
struct msg1 {int dummy; } ;
struct TYPE_4__ {int msize; int mtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct msqid_ds*) ;
 int FUNC_2 (int,int *,int ,int,int) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(struct msgque_data *VAR_7)
{
 struct msqid_ds VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
  VAR_11 = FUNC_1(VAR_9, VAR_5, &VAR_8);
  if (VAR_11 < 0) {
   if (VAR_6 == -VAR_0)
    continue;
   FUNC_3("Failed to get stats for IPC queue with id %d\n",
     VAR_9);
   return -VAR_6;
  }

  if (VAR_11 == VAR_7->msq_id)
   break;
 }

 VAR_7->messages = FUNC_0(sizeof(struct msg1) * VAR_8.msg_qnum);
 if (VAR_7->messages == ((void*)0)) {
  FUNC_3("Failed to get stats for IPC queue\n");
  return -VAR_1;
 }

 VAR_7->qnum = VAR_8.msg_qnum;
 VAR_7->mode = VAR_8.msg_perm.mode;
 VAR_7->qbytes = VAR_8.msg_qbytes;

 for (VAR_10 = 0; VAR_10 < VAR_7->qnum; VAR_10++) {
  VAR_11 = FUNC_2(VAR_7->msq_id, &VAR_7->messages[VAR_10].mtype,
    VAR_3, VAR_10, VAR_2 | VAR_4);
  if (VAR_11 < 0) {
   FUNC_3("Failed to copy IPC message: %m (%d)\n", VAR_6);
   return -VAR_6;
  }
  VAR_7->messages[VAR_10].msize = VAR_11;
 }
 return 0;
}
