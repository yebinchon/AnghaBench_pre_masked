
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct msghdr*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock*,int ,int,int*) ;

void FUNC_4(const struct sctp_ulpevent *VAR_1,
    struct msghdr *VAR_2,
    struct sock *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3, VAR_0, 1, &VAR_5);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(FUNC_2(VAR_4),
          VAR_2, VAR_4);

  FUNC_1(VAR_4);
 }
}
