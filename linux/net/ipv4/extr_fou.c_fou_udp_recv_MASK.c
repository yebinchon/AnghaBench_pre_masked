
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct fou {int protocol; } ;


 struct fou* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct fou*,int) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct fou *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return 1;

 if (FUNC_1(VAR_1, VAR_2, sizeof(struct udphdr)))
  goto drop;

 return -VAR_2->protocol;

drop:
 FUNC_2(VAR_1);
 return 0;
}
