
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int truesize; } ;
struct mpoa_client {int mpoad_vcc; } ;
struct k_message {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 struct sock* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct k_message*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sock*) ;

int FUNC_8(struct k_message *VAR_3, struct mpoa_client *VAR_4)
{
 struct sk_buff *VAR_5;
 struct sock *VAR_6;

 if (VAR_4 == ((void*)0) || !VAR_4->mpoad_vcc) {
  FUNC_2("mesg %d to a non-existent mpoad\n", VAR_3->type);
  return -VAR_1;
 }

 VAR_5 = FUNC_0(sizeof(struct k_message), VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 FUNC_5(VAR_5, sizeof(struct k_message));
 FUNC_4(VAR_5, VAR_3, sizeof(*VAR_3));
 FUNC_1(VAR_4->mpoad_vcc, VAR_5->truesize);

 VAR_6 = FUNC_3(VAR_4->mpoad_vcc);
 FUNC_6(&VAR_6->sk_receive_queue, VAR_5);
 VAR_6->sk_data_ready(VAR_6);

 return 0;
}
