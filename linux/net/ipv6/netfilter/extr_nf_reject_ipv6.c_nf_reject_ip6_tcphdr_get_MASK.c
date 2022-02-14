
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef struct tcphdr {scalar_t__ rst; } const tcphdr ;
struct sk_buff {int data; int len; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int,int,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 struct tcphdr const* FUNC_4 (struct sk_buff*,int,int,struct tcphdr const*) ;

const struct tcphdr *FUNC_5(struct sk_buff *VAR_1,
           struct tcphdr *VAR_2,
           unsigned int *VAR_3, int VAR_4)
{
 const struct ipv6hdr *VAR_5 = FUNC_0(VAR_1);
 u8 VAR_6;
 __be16 VAR_7;
 int VAR_8;

 VAR_6 = VAR_5->nexthdr;
 VAR_8 = FUNC_1(VAR_1, ((u8 *)(VAR_5 + 1) - VAR_1->data),
       &VAR_6, &VAR_7);

 if ((VAR_8 < 0) || (VAR_8 > VAR_1->len)) {
  FUNC_3("Cannot get TCP header.\n");
  return ((void*)0);
 }

 *VAR_3 = VAR_1->len - VAR_8;


 if (VAR_6 != VAR_0 || *VAR_3 < sizeof(struct tcphdr)) {
  FUNC_3("proto(%d) != IPPROTO_TCP or too short (len = %d)\n",
    VAR_6, *VAR_3);
  return ((void*)0);
 }

 VAR_2 = FUNC_4(VAR_1, VAR_8, sizeof(struct tcphdr),
       VAR_2);
 if (VAR_2 == ((void*)0))
  return ((void*)0);


 if (VAR_2->rst) {
  FUNC_3("RST is set\n");
  return ((void*)0);
 }


 if (FUNC_2(VAR_1, VAR_4, VAR_8, VAR_0)) {
  FUNC_3("TCP checksum is invalid\n");
  return ((void*)0);
 }

 return VAR_2;
}
