
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sco_conn {int mtu; int hcon; } ;
struct msghdr {int msg_flags; } ;
struct TYPE_2__ {struct sco_conn* conn; } ;


 int FUNC_0 (char*,struct sock*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (struct sock*,int,int,int*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,struct msghdr*,int) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_3, struct msghdr *VAR_4, int VAR_5)
{
 struct sco_conn *VAR_6 = FUNC_5(VAR_3)->conn;
 struct sk_buff *VAR_7;
 int VAR_8;


 if (VAR_5 > VAR_6->mtu)
  return -VAR_1;

 FUNC_0("sk %p len %d", VAR_3, VAR_5);

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_4->msg_flags & VAR_2, &VAR_8);
 if (!VAR_7)
  return VAR_8;

 if (FUNC_4(FUNC_6(VAR_7, VAR_5), VAR_4, VAR_5)) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 FUNC_2(VAR_6->hcon, VAR_7);

 return VAR_5;
}
