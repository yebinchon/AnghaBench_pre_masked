
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_ticket_handler {int session_key; } ;
struct ceph_x_server_challenge {int server_challenge; } ;
struct ceph_x_reply_header {int result; int op; } ;
struct ceph_x_info {int starting; int have_keys; int secret; int server_challenge; } ;
struct ceph_auth_client {int want_keys; struct ceph_x_info* private; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_x_ticket_handler*) ;
 int FUNC_1 (struct ceph_x_ticket_handler*) ;
 int FUNC_2 (struct ceph_auth_client*,int *,void*,void*) ;
 int FUNC_3 (char*,int,...) ;
 struct ceph_x_ticket_handler* FUNC_4 (struct ceph_auth_client*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ceph_auth_client *VAR_3, int VAR_4,
          void *VAR_5, void *VAR_6)
{
 struct ceph_x_info *VAR_7 = VAR_3->private;
 struct ceph_x_reply_header *VAR_8 = VAR_5;
 struct ceph_x_ticket_handler *VAR_9;
 int VAR_10 = VAR_6 - VAR_5;
 int VAR_11;
 int VAR_12;

 if (VAR_4)
  return VAR_4;

 if (VAR_7->starting) {

  struct ceph_x_server_challenge *VAR_13 = VAR_5;

  if (VAR_10 != sizeof(*VAR_13))
   return -VAR_2;
  VAR_7->server_challenge = FUNC_7(VAR_13->server_challenge);
  FUNC_3("handle_reply got server challenge %llx\n",
       VAR_7->server_challenge);
  VAR_7->starting = 0;
  VAR_7->have_keys &= ~VAR_0;
  return -VAR_1;
 }

 VAR_11 = FUNC_5(VAR_8->op);
 VAR_4 = FUNC_6(VAR_8->result);
 FUNC_3("handle_reply op %d result %d\n", VAR_11, VAR_4);
 switch (VAR_11) {
 case 129:

  VAR_12 = FUNC_2(VAR_3, &VAR_7->secret,
            VAR_5 + sizeof(*VAR_8), VAR_6);
  break;

 case 128:
  VAR_9 = FUNC_4(VAR_3, VAR_0);
  if (FUNC_0(VAR_9))
   return FUNC_1(VAR_9);
  VAR_12 = FUNC_2(VAR_3, &VAR_9->session_key,
            VAR_5 + sizeof(*VAR_8), VAR_6);
  break;

 default:
  return -VAR_2;
 }
 if (VAR_12)
  return VAR_12;
 if (VAR_3->want_keys == VAR_7->have_keys)
  return 0;
 return -VAR_1;
}
