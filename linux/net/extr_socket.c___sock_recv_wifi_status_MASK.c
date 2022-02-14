
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int wifi_acked; int wifi_acked_valid; } ;
struct msghdr {int dummy; } ;
typedef int ack ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msghdr*,int ,int ,int,int*) ;
 int FUNC_1 (struct sock*,int ) ;

void FUNC_2(struct msghdr *VAR_3, struct sock *VAR_4,
 struct sk_buff *VAR_5)
{
 int VAR_6;

 if (!FUNC_1(VAR_4, VAR_1))
  return;
 if (!VAR_5->wifi_acked_valid)
  return;

 VAR_6 = VAR_5->wifi_acked;

 FUNC_0(VAR_3, VAR_2, VAR_0, sizeof(VAR_6), &VAR_6);
}
