
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_ui_cb {void* ssap; void* dsap; } ;
struct TYPE_2__ {scalar_t__ sk_type; } ;
struct nfc_llcp_sock {TYPE_1__ sk; } ;
struct nfc_llcp_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (struct sk_buff*) ;
 struct nfc_llcp_sock* FUNC_1 (struct nfc_llcp_local*,void*,int ) ;
 int FUNC_2 (struct nfc_llcp_sock*) ;
 void* FUNC_3 (struct sk_buff*) ;
 struct nfc_llcp_ui_cb* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,void*,void*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (TYPE_1__*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct nfc_llcp_local *VAR_3,
        struct sk_buff *VAR_4)
{
 struct nfc_llcp_sock *VAR_5;
 struct nfc_llcp_ui_cb *VAR_6;
 u8 VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_3(VAR_4);

 VAR_6 = FUNC_4(VAR_4);
 VAR_6->dsap = VAR_7;
 VAR_6->ssap = VAR_8;

 FUNC_5("%d %d\n", VAR_7, VAR_8);


 VAR_5 = FUNC_1(VAR_3, VAR_7, VAR_1);
 if (VAR_5 == ((void*)0) || VAR_5->sk.sk_type != VAR_2)
  return;


 FUNC_8(VAR_4, VAR_0);
 if (!FUNC_9(&VAR_5->sk, VAR_4)) {




  FUNC_7(VAR_4);
 } else {
  FUNC_6("Receive queue is full\n");
 }

 FUNC_2(VAR_5);
}
