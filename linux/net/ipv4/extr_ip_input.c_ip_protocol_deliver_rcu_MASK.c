
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_protocol {int handler; int no_policy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 int * VAR_5 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 struct net_protocol* FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int *,int ,struct sk_buff*) ;

void FUNC_9(struct net *VAR_8, struct sk_buff *VAR_9, int VAR_10)
{
 const struct net_protocol *VAR_11;
 int VAR_12, VAR_13;

resubmit:
 VAR_12 = FUNC_6(VAR_9, VAR_10);

 VAR_11 = FUNC_7(VAR_5[VAR_10]);
 if (VAR_11) {
  if (!VAR_11->no_policy) {
   if (!FUNC_8(((void*)0), VAR_4, VAR_9)) {
    FUNC_4(VAR_9);
    return;
   }
   FUNC_5(VAR_9);
  }
  VAR_13 = FUNC_0(VAR_11->handler, VAR_6, VAR_7,
          VAR_9);
  if (VAR_13 < 0) {
   VAR_10 = -VAR_13;
   goto resubmit;
  }
  FUNC_1(VAR_8, VAR_2);
 } else {
  if (!VAR_12) {
   if (FUNC_8(((void*)0), VAR_4, VAR_9)) {
    FUNC_1(VAR_8, VAR_3);
    FUNC_3(VAR_9, VAR_0,
       VAR_1, 0);
   }
   FUNC_4(VAR_9);
  } else {
   FUNC_1(VAR_8, VAR_2);
   FUNC_2(VAR_9);
  }
 }
}
