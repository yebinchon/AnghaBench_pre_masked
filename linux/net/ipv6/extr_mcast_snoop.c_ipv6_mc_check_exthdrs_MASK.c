
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int,scalar_t__*,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4)
{
 const struct ipv6hdr *VAR_5;
 int VAR_6;
 u8 VAR_7;
 __be16 VAR_8;

 VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->nexthdr != VAR_2)
  return -VAR_1;

 VAR_7 = VAR_5->nexthdr;
 VAR_6 = FUNC_2(VAR_4) + sizeof(*VAR_5);
 VAR_6 = FUNC_1(VAR_4, VAR_6, &VAR_7, &VAR_8);

 if (VAR_6 < 0)
  return -VAR_0;

 if (VAR_7 != VAR_3)
  return -VAR_1;

 FUNC_3(VAR_4, VAR_6);

 return 0;
}
