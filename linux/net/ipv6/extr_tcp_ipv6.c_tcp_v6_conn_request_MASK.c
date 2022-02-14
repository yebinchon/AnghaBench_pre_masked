
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int VAR_2 ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 if (VAR_4->protocol == FUNC_0(VAR_0))
  return FUNC_4(VAR_3, VAR_4);

 if (!FUNC_1(VAR_4))
  goto drop;

 return FUNC_2(&VAR_1,
    &VAR_2, VAR_3, VAR_4);

drop:
 FUNC_3(VAR_3);
 return 0;
}
