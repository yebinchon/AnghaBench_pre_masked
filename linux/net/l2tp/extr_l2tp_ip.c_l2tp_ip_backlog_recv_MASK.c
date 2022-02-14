
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto drop;

 return 0;

drop:
 FUNC_0(FUNC_2(VAR_1), VAR_0);
 FUNC_1(VAR_2);
 return 0;
}
