
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_2, struct sk_buff *VAR_3,
          struct udphdr *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_2) && VAR_4->check && !FUNC_0(VAR_2))
  FUNC_2(VAR_3, VAR_0, VAR_1);

 VAR_5 = FUNC_3(VAR_2, VAR_3);




 if (VAR_5 > 0)
  return -VAR_5;
 return 0;
}
