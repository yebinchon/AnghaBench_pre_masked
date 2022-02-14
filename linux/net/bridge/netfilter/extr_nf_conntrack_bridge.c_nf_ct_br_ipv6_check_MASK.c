
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct ipv6hdr {int version; int payload_len; } ;


 struct ipv6hdr* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_3(const struct sk_buff *VAR_0)
{
 const struct ipv6hdr *VAR_1;
 int VAR_2, VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->version != 6)
  return -1;

 VAR_3 = FUNC_1(VAR_1->payload_len) + sizeof(struct ipv6hdr) + VAR_2;
 if (VAR_0->len < VAR_3)
  return -1;

 return 0;
}
