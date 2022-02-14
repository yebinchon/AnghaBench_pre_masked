
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ inet_daddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (int,struct sock*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5;

 if (FUNC_3(VAR_3)->inet_daddr) {
  FUNC_9(VAR_3, VAR_4);
  FUNC_6(VAR_3, VAR_4);
  FUNC_5(VAR_3);
 } else {
  FUNC_7(VAR_3, VAR_4);
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  int VAR_6 = FUNC_0(VAR_3);


  if (VAR_5 == -VAR_0)
   FUNC_1(FUNC_8(VAR_3), VAR_2,
     VAR_6);
  FUNC_1(FUNC_8(VAR_3), VAR_1, VAR_6);
  FUNC_4(VAR_4);
  FUNC_10(VAR_5, VAR_3);
  return -1;
 }

 return 0;
}
