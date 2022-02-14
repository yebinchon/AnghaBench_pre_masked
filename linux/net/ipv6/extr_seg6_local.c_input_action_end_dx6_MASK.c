
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct in6_addr {int dummy; } ;
struct seg6_local_lwt {struct in6_addr nh6; } ;
struct ipv6hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct in6_addr*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,struct in6_addr*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2,
    struct seg6_local_lwt *VAR_3)
{
 struct in6_addr *VAR_4 = ((void*)0);





 if (!FUNC_0(VAR_2, VAR_1))
  goto drop;

 if (!FUNC_4(VAR_2, sizeof(struct ipv6hdr)))
  goto drop;
 if (!FUNC_2(&VAR_3->nh6))
  VAR_4 = &VAR_3->nh6;

 FUNC_5(VAR_2, VAR_4, 0);

 return FUNC_1(VAR_2);
drop:
 FUNC_3(VAR_2);
 return -VAR_0;
}
