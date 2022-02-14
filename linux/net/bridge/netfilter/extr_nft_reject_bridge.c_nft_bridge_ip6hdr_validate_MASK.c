
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct ipv6hdr {int version; int payload_len; } ;


 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0)
{
 struct ipv6hdr *VAR_1;
 u32 VAR_2;

 if (!FUNC_2(VAR_0, sizeof(struct ipv6hdr)))
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->version != 6)
  return 0;

 VAR_2 = FUNC_1(VAR_1->payload_len);
 if (VAR_2 + sizeof(struct ipv6hdr) > VAR_0->len)
  return 0;

 return 1;
}
