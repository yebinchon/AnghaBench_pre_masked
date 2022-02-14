
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct ipv6hdr {size_t nexthdr; } ;
struct inet6_protocol {int (* err_handler ) (struct sk_buff*,int *,size_t,size_t,int,int ) ;} ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct net* FUNC_2 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (struct sk_buff*,int,size_t*,int *) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,size_t,size_t,size_t,int,int ) ;
 struct inet6_protocol* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int *,size_t,size_t,int,int ) ;

void FUNC_9(struct sk_buff *VAR_2, u8 VAR_3, u8 VAR_4, __be32 VAR_5)
{
 const struct inet6_protocol *VAR_6;
 int VAR_7;
 __be16 VAR_8;
 u8 VAR_9;
 struct net *VAR_10 = FUNC_2(VAR_2->dev);

 if (!FUNC_5(VAR_2, sizeof(struct ipv6hdr)))
  goto out;

 VAR_9 = ((struct ipv6hdr *)VAR_2->data)->nexthdr;
 if (FUNC_3(VAR_9)) {

  VAR_7 = FUNC_4(VAR_2, sizeof(struct ipv6hdr),
      &VAR_9, &VAR_8);
  if (VAR_7 < 0)
   goto out;
 } else {
  VAR_7 = sizeof(struct ipv6hdr);
 }


 if (!FUNC_5(VAR_2, VAR_7+8))
  goto out;
 VAR_6 = FUNC_7(VAR_1[VAR_9]);
 if (VAR_6 && VAR_6->err_handler)
  VAR_6->err_handler(VAR_2, ((void*)0), VAR_3, VAR_4, VAR_7, VAR_5);

 FUNC_6(VAR_2, VAR_9, VAR_3, VAR_4, VAR_7, VAR_5);
 return;

out:
 FUNC_0(VAR_10, FUNC_1(VAR_2->dev), VAR_0);
}
