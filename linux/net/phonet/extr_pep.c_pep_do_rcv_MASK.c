
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sockaddr_pn {int dummy; } ;
struct sock {int sk_state; int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {scalar_t__ pipe_handle; int message_id; } ;
struct pep_sock {int hlist; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,scalar_t__,int ) ;
 struct sock* FUNC_2 (int *,struct sockaddr_pn*,scalar_t__) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int *,int ,int ) ;
 struct pep_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct sockaddr_pn*) ;
 struct pnpipehdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,struct sk_buff*,int) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 int FUNC_14 (struct sock*,int ) ;
 int FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_10, struct sk_buff *VAR_11)
{
 struct pep_sock *VAR_12 = FUNC_5(VAR_10);
 struct sock *VAR_13;
 struct pnpipehdr *VAR_14;
 struct sockaddr_pn VAR_15;
 u8 VAR_16;

 if (!FUNC_9(VAR_11, sizeof(*VAR_14)))
  goto drop;

 VAR_14 = FUNC_8(VAR_11);
 VAR_16 = VAR_14->pipe_handle;
 if (VAR_16 == VAR_3)
  goto drop;

 FUNC_7(VAR_11, &VAR_15);


 VAR_13 = FUNC_2(&VAR_12->hlist, &VAR_15, VAR_16);
 if (VAR_13)
  return FUNC_12(VAR_13, VAR_11, 1);

 switch (VAR_14->message_id) {
 case 133:
  if (VAR_10->sk_state != VAR_9 || FUNC_11(VAR_10)) {
   FUNC_3(VAR_10, VAR_11, VAR_2,
     VAR_0);
   break;
  }
  FUNC_13(&VAR_10->sk_receive_queue, VAR_11);
  FUNC_10(VAR_10);
  if (!FUNC_14(VAR_10, VAR_5))
   VAR_10->sk_data_ready(VAR_10);
  return VAR_1;

 case 130:
  FUNC_4(VAR_10, VAR_11, VAR_4, ((void*)0), 0, VAR_0);
  break;

 case 132:
  FUNC_1(VAR_10, VAR_11, VAR_3, VAR_0);
  break;

 case 128:
 case 129:
 case 131:

  break;

 default:
  if ((1 << VAR_10->sk_state)
    & ~(VAR_6|VAR_8|VAR_7))

   return FUNC_6(VAR_10, VAR_11);
 }
drop:
 FUNC_0(VAR_11);
 return VAR_1;
}
