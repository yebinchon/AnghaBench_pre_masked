
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_filter; } ;
struct sk_filter {int prog; } ;
struct sk_buff {struct sock* sk; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 unsigned int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 struct sk_filter* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;

int FUNC_12(struct sock *VAR_4, struct sk_buff *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct sk_filter *VAR_8;






 if (FUNC_9(VAR_5) && !FUNC_10(VAR_4, VAR_3)) {
  FUNC_1(FUNC_11(VAR_4), VAR_2);
  return -VAR_0;
 }
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_6();
 VAR_8 = FUNC_5(VAR_4->sk_filter);
 if (VAR_8) {
  struct sock *VAR_9 = VAR_5->sk;
  unsigned int VAR_10;

  VAR_5->sk = VAR_4;
  VAR_10 = FUNC_2(VAR_8->prog, VAR_5);
  VAR_5->sk = VAR_9;
  VAR_7 = VAR_10 ? FUNC_4(VAR_5, FUNC_3(VAR_6, VAR_10)) : -VAR_1;
 }
 FUNC_7();

 return VAR_7;
}
