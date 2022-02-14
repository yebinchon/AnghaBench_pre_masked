
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct ipv6hdr {int version; int payload_len; } ;


 int VAR_0 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1)
{
 const struct ipv6hdr *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4 = FUNC_3(VAR_1) + sizeof(*VAR_2);

 if (!FUNC_2(VAR_1, VAR_4))
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->version != 6)
  return -VAR_0;

 VAR_3 = VAR_4 + FUNC_1(VAR_2->payload_len);
 if (VAR_1->len < VAR_3 || VAR_3 <= VAR_4)
  return -VAR_0;

 FUNC_4(VAR_1, VAR_4);

 return 0;
}
