
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int truesize; scalar_t__ data; } ;
struct TYPE_4__ {int eg_info; } ;
struct k_message {TYPE_1__ content; int type; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_5__ {int ctrl_info; } ;
typedef TYPE_2__ eg_cache_entry ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct atm_vcc*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (char*) ;
 struct sock* FUNC_5 (struct atm_vcc*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct atm_vcc *VAR_2, eg_cache_entry *VAR_3)
{
 struct sock *VAR_4;
 struct k_message *VAR_5;
 struct sk_buff *VAR_6;

 FUNC_2("entering\n");
 if (VAR_2 == ((void*)0)) {
  FUNC_4("vcc == NULL\n");
  return;
 }

 VAR_6 = FUNC_0(sizeof(struct k_message), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_4("out of memory\n");
  return;
 }

 FUNC_6(VAR_6, sizeof(struct k_message));
 FUNC_3(VAR_6->data, 0, sizeof(struct k_message));
 VAR_5 = (struct k_message *)VAR_6->data;
 VAR_5->type = VAR_0;
 if (VAR_3 != ((void*)0))
  VAR_5->content.eg_info = VAR_3->ctrl_info;

 FUNC_1(VAR_2, VAR_6->truesize);

 VAR_4 = FUNC_5(VAR_2);
 FUNC_7(&VAR_4->sk_receive_queue, VAR_6);
 VAR_4->sk_data_ready(VAR_4);
 FUNC_2("exiting\n");
}
