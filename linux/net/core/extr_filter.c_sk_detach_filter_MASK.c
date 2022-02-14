
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_filter; } ;
struct sk_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*) ;
 struct sk_filter* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sock*,struct sk_filter*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;

int FUNC_5(struct sock *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct sk_filter *VAR_5;

 if (FUNC_4(VAR_3, VAR_2))
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_3->sk_filter,
        FUNC_1(VAR_3));
 if (VAR_5) {
  FUNC_0(VAR_3->sk_filter, ((void*)0));
  FUNC_3(VAR_3, VAR_5);
  VAR_4 = 0;
 }

 return VAR_4;
}
