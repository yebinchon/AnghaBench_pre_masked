
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct inet_sock {unsigned int cmsg_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct msghdr*,struct sk_buff*,int,int) ;
 int FUNC_2 (struct msghdr*,struct sk_buff*) ;
 int FUNC_3 (struct msghdr*,struct sk_buff*) ;
 int FUNC_4 (struct msghdr*,struct sk_buff*) ;
 int FUNC_5 (struct msghdr*,struct sk_buff*) ;
 int FUNC_6 (int ,struct msghdr*,struct sk_buff*) ;
 int FUNC_7 (struct msghdr*,struct sk_buff*) ;
 int FUNC_8 (struct msghdr*,struct sk_buff*) ;
 int FUNC_9 (struct msghdr*,struct sk_buff*) ;
 int FUNC_10 (struct sock*) ;

void FUNC_11(struct msghdr *VAR_9, struct sock *VAR_10,
    struct sk_buff *VAR_11, int VAR_12, int VAR_13)
{
 struct inet_sock *VAR_14 = FUNC_0(VAR_10);
 unsigned int VAR_15 = VAR_14->cmsg_flags;


 if (VAR_15 & VAR_3) {
  FUNC_5(VAR_9, VAR_11);

  VAR_15 &= ~VAR_3;
  if (!VAR_15)
   return;
 }

 if (VAR_15 & VAR_8) {
  FUNC_9(VAR_9, VAR_11);

  VAR_15 &= ~VAR_8;
  if (!VAR_15)
   return;
 }

 if (VAR_15 & VAR_7) {
  FUNC_8(VAR_9, VAR_11);

  VAR_15 &= ~VAR_7;
  if (!VAR_15)
   return;
 }

 if (VAR_15 & VAR_5) {
  FUNC_4(VAR_9, VAR_11);

  VAR_15 &= ~VAR_5;
  if (!VAR_15)
   return;
 }

 if (VAR_15 & VAR_6) {
  FUNC_6(FUNC_10(VAR_10), VAR_9, VAR_11);

  VAR_15 &= ~VAR_6;
  if (!VAR_15)
   return;
 }

 if (VAR_15 & VAR_2) {
  FUNC_7(VAR_9, VAR_11);

  VAR_15 &= ~VAR_2;
  if (!VAR_15)
   return;
 }

 if (VAR_15 & VAR_1) {
  FUNC_2(VAR_9, VAR_11);

  VAR_15 &= ~VAR_1;
  if (!VAR_15)
   return;
 }

 if (VAR_15 & VAR_0)
  FUNC_1(VAR_9, VAR_11, VAR_12, VAR_13);

 if (VAR_15 & VAR_4)
  FUNC_3(VAR_9, VAR_11);
}
