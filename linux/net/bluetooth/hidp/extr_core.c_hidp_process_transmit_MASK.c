
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct hidp_session {int dummy; } ;


 int FUNC_0 (char*,struct hidp_session*) ;
 int VAR_0 ;
 int FUNC_1 (struct socket*,int ,int ) ;
 int FUNC_2 (struct hidp_session*) ;
 int FUNC_3 (struct hidp_session*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct sk_buff_head*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct hidp_session *VAR_1,
      struct sk_buff_head *VAR_2,
      struct socket *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 FUNC_0("session %p", VAR_1);

 while ((VAR_4 = FUNC_5(VAR_2))) {
  VAR_5 = FUNC_1(VAR_3, VAR_4->data, VAR_4->len);
  if (VAR_5 == -VAR_0) {
   FUNC_6(VAR_2, VAR_4);
   break;
  } else if (VAR_5 < 0) {
   FUNC_2(VAR_1);
   FUNC_4(VAR_4);
   break;
  }

  FUNC_3(VAR_1);
  FUNC_4(VAR_4);
 }
}
