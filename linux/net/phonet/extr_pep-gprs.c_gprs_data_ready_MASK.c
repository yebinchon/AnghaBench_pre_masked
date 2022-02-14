
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct gprs_dev* sk_user_data; } ;
struct sk_buff {int dummy; } ;
struct gprs_dev {int dummy; } ;


 int FUNC_0 (struct gprs_dev*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct gprs_dev *VAR_1 = VAR_0->sk_user_data;
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_1(VAR_0)) != ((void*)0)) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_1, VAR_2);
 }
}
