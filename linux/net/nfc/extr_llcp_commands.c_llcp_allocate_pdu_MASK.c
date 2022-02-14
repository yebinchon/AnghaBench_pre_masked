
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_sock {int ssap; int dsap; int sk; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_1 (int ,int *,int ,scalar_t__,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct nfc_llcp_sock *VAR_2,
      u8 VAR_3, u16 VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 if (VAR_2->ssap == 0)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_2->dev, &VAR_2->sk, VAR_1,
     VAR_4 + VAR_0, &VAR_6);
 if (VAR_5 == ((void*)0)) {
  FUNC_2("Could not allocate PDU\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_5, VAR_2->dsap, VAR_2->ssap, VAR_3);

 return VAR_5;
}
