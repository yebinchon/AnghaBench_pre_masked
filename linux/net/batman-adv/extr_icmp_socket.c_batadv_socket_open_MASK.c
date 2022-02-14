
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_private; } ;
struct file {struct batadv_socket_client* private_data; } ;
struct batadv_socket_client {unsigned int index; int queue_wait; int lock; int bat_priv; scalar_t__ queue_len; int queue_list; } ;


 unsigned int FUNC_0 (struct batadv_socket_client**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct file*,char*) ;
 struct batadv_socket_client** VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct batadv_socket_client*) ;
 struct batadv_socket_client* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,struct file*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_6, struct file *VAR_7)
{
 unsigned int VAR_8;
 struct batadv_socket_client *VAR_9;

 if (!FUNC_10(VAR_4))
  return -VAR_0;

 FUNC_2(VAR_7, "");

 FUNC_9(VAR_6, VAR_7);

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  FUNC_6(VAR_4);
  return -VAR_1;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  if (!VAR_5[VAR_8]) {
   VAR_5[VAR_8] = VAR_9;
   break;
  }
 }

 if (VAR_8 == FUNC_0(VAR_5)) {
  FUNC_7("Error - can't add another packet client: maximum number of clients reached\n");
  FUNC_4(VAR_9);
  FUNC_6(VAR_4);
  return -VAR_2;
 }

 FUNC_1(&VAR_9->queue_list);
 VAR_9->queue_len = 0;
 VAR_9->index = VAR_8;
 VAR_9->bat_priv = VAR_6->i_private;
 FUNC_8(&VAR_9->lock);
 FUNC_3(&VAR_9->queue_wait);

 VAR_7->private_data = VAR_9;

 return 0;
}
