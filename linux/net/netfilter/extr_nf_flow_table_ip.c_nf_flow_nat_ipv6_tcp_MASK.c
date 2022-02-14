
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int check; } ;
struct sk_buff {int dummy; } ;
struct in6_addr {int s6_addr32; } ;


 int FUNC_0 (int *,struct sk_buff*,int ,int ,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0, unsigned int VAR_1,
    struct in6_addr *VAR_2,
    struct in6_addr *VAR_3)
{
 struct tcphdr *VAR_4;

 if (!FUNC_1(VAR_0, VAR_1 + sizeof(*VAR_4)) ||
     FUNC_3(VAR_0, VAR_1 + sizeof(*VAR_4)))
  return -1;

 VAR_4 = (void *)(FUNC_2(VAR_0) + VAR_1);
 FUNC_0(&VAR_4->check, VAR_0, VAR_2->s6_addr32,
      VAR_3->s6_addr32, 1);

 return 0;
}
