
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int len; int truesize; scalar_t__ data; } ;
struct lec_priv {int lecd; } ;
struct TYPE_3__ {int targetless_le_arp; int atm_addr; int mac_addr; } ;
struct TYPE_4__ {TYPE_1__ normal; } ;
struct atmlec_msg {int sizeoftlvs; TYPE_2__ content; int type; } ;
typedef int atmlec_msg_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned char const*) ;
 int FUNC_3 (int *,unsigned char const*,int ) ;
 int FUNC_4 (struct atmlec_msg*,int ,int) ;
 int FUNC_5 (char*,int) ;
 struct sock* FUNC_6 (int ) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int
FUNC_10(struct lec_priv *VAR_2, atmlec_msg_type VAR_3,
      const unsigned char *VAR_4, const unsigned char *VAR_5,
      struct sk_buff *VAR_6)
{
 struct sock *VAR_7;
 struct sk_buff *VAR_8;
 struct atmlec_msg *VAR_9;

 if (!VAR_2 || !VAR_2->lecd)
  return -1;
 VAR_8 = FUNC_0(sizeof(struct atmlec_msg), VAR_1);
 if (!VAR_8)
  return -1;
 VAR_8->len = sizeof(struct atmlec_msg);
 VAR_9 = (struct atmlec_msg *)VAR_8->data;
 FUNC_4(VAR_9, 0, sizeof(struct atmlec_msg));
 VAR_9->type = VAR_3;
 if (VAR_6 != ((void*)0))
  VAR_9->sizeoftlvs = VAR_6->len;
 if (VAR_4)
  FUNC_2(VAR_9->content.normal.mac_addr, VAR_4);
 else
  VAR_9->content.normal.targetless_le_arp = 1;
 if (VAR_5)
  FUNC_3(&VAR_9->content.normal.atm_addr, VAR_5, VAR_0);

 FUNC_1(VAR_2->lecd, VAR_8->truesize);
 VAR_7 = FUNC_6(VAR_2->lecd);
 FUNC_7(&VAR_7->sk_receive_queue, VAR_8);
 VAR_7->sk_data_ready(VAR_7);

 if (VAR_6 != ((void*)0)) {
  FUNC_5("about to send %d bytes of data\n", VAR_6->len);
  FUNC_1(VAR_2->lecd, VAR_6->truesize);
  FUNC_7(&VAR_7->sk_receive_queue, VAR_6);
  VAR_7->sk_data_ready(VAR_7);
 }

 return 0;
}
