
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msgque_data {int msq_id; int mode; int qnum; TYPE_1__* messages; int key; } ;
struct TYPE_2__ {int msize; int mtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,int *,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,int) ;

int FUNC_8(struct msgque_data *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 char VAR_12[32];

 VAR_8 = FUNC_3("/proc/sys/kernel/msg_next_id", VAR_5);
 if (VAR_8 == -1) {
  FUNC_4("Failed to open /proc/sys/kernel/msg_next_id\n");
  return -VAR_6;
 }
 FUNC_5(VAR_12, "%d", VAR_7->msq_id);

 VAR_9 = FUNC_7(VAR_8, VAR_12, FUNC_6(VAR_12));
 if (VAR_9 != FUNC_6(VAR_12)) {
  FUNC_4("Failed to write to /proc/sys/kernel/msg_next_id\n");
  return -VAR_6;
 }

 VAR_10 = FUNC_1(VAR_7->key, VAR_7->mode | VAR_1 | VAR_2);
 if (VAR_10 == -1) {
  FUNC_4("Failed to create queue\n");
  return -VAR_6;
 }

 if (VAR_10 != VAR_7->msq_id) {
  FUNC_4("Restored queue has wrong id (%d instead of %d)\n",
       VAR_10, VAR_7->msq_id);
  VAR_9 = -VAR_0;
  goto destroy;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->qnum; VAR_11++) {
  if (FUNC_2(VAR_7->msq_id, &VAR_7->messages[VAR_11].mtype,
      VAR_7->messages[VAR_11].msize, VAR_3) != 0) {
   FUNC_4("msgsnd failed (%m)\n");
   VAR_9 = -VAR_6;
   goto destroy;
  };
 }
 return 0;

destroy:
 if (FUNC_0(VAR_10, VAR_4, ((void*)0)))
  FUNC_4("Failed to destroy queue: %d\n", -VAR_6);
 return VAR_9;
}
