
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct udp_bearer {int bearer; } ;
struct tipc_msg {int dummy; } ;
struct tipc_bearer {int up; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (char*) ;
 struct tipc_bearer* FUNC_4 (int ) ;
 struct udp_bearer* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,struct sk_buff*,struct tipc_bearer*) ;
 int FUNC_10 (struct tipc_bearer*,struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct udp_bearer *VAR_3;
 struct tipc_bearer *VAR_4;
 struct tipc_msg *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_5(VAR_1);
 if (!VAR_3) {
  FUNC_3("Failed to get UDP bearer reference");
  goto out;
 }
 FUNC_6(VAR_2, sizeof(struct udphdr));
 VAR_5 = FUNC_0(VAR_2);

 VAR_4 = FUNC_4(VAR_3->bearer);
 if (!VAR_4)
  goto out;

 if (VAR_4 && FUNC_8(0, &VAR_4->up)) {
  FUNC_9(FUNC_7(VAR_1), VAR_2, VAR_4);
  return 0;
 }

 if (FUNC_11(FUNC_2(VAR_5) == VAR_0)) {
  VAR_6 = FUNC_10(VAR_4, VAR_2);
  if (VAR_6)
   goto out;
 }

out:
 FUNC_1(VAR_2);
 return 0;
}
