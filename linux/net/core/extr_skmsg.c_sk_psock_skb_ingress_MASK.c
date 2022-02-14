
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_psock {struct sock* sk; } ;
struct TYPE_2__ {int size; int end; scalar_t__ start; int data; } ;
struct sk_msg {struct sk_buff* skb; TYPE_1__ sg; } ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_msg*) ;
 struct sk_msg* FUNC_1 (int,int) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sk_msg*) ;
 int FUNC_4 (struct sock*,struct sk_psock*) ;
 int FUNC_5 (struct sk_psock*,struct sk_msg*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_psock *VAR_4, struct sk_buff *VAR_5)
{
 struct sock *VAR_6 = VAR_4->sk;
 int VAR_7 = 0, VAR_8;
 struct sk_msg *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3 | VAR_1);
 if (FUNC_8(!VAR_9))
  return -VAR_0;
 if (!FUNC_6(VAR_6, VAR_5, VAR_5->len)) {
  FUNC_0(VAR_9);
  return -VAR_0;
 }

 FUNC_3(VAR_9);
 VAR_8 = FUNC_7(VAR_5, VAR_9->sg.data, 0, VAR_5->len);
 if (FUNC_8(VAR_8 < 0)) {
  FUNC_0(VAR_9);
  return VAR_8;
 }

 FUNC_2(VAR_6, VAR_5->len);
 VAR_7 = VAR_5->len;
 VAR_9->sg.start = 0;
 VAR_9->sg.size = VAR_7;
 VAR_9->sg.end = VAR_8 == VAR_2 ? 0 : VAR_8;
 VAR_9->skb = VAR_5;

 FUNC_5(VAR_4, VAR_9);
 FUNC_4(VAR_6, VAR_4);
 return VAR_7;
}
