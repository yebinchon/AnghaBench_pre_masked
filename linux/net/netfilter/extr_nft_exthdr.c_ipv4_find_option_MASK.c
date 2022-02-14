
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; } ;
struct ip_options {int optlen; int is_strictroute; int router_alert; int rr; int srr; int __data; } ;
typedef int _iph ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ FUNC_0 (struct net*,struct ip_options*,int *,int *) ;
 int FUNC_1 (struct ip_options*,int ,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int,int ,int) ;
 struct iphdr* FUNC_3 (struct sk_buff*,int ,int,struct iphdr*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_3, struct sk_buff *VAR_4,
       unsigned int *VAR_5, int VAR_6)
{
 unsigned char VAR_7[sizeof(struct ip_options) + 40];
 struct ip_options *VAR_8 = (struct ip_options *)VAR_7;
 struct iphdr *VAR_9, VAR_10;
 unsigned int VAR_11;
 bool VAR_12 = 0;
 __be32 VAR_13;
 int VAR_14;

 VAR_9 = FUNC_3(VAR_4, 0, sizeof(VAR_10), &VAR_10);
 if (!VAR_9)
  return -VAR_0;
 VAR_11 = sizeof(struct iphdr);

 VAR_14 = VAR_9->ihl * 4 - (int)sizeof(struct iphdr);
 if (VAR_14 <= 0)
  return -VAR_1;

 FUNC_1(VAR_8, 0, sizeof(struct ip_options));



 if (FUNC_2(VAR_4, VAR_11, VAR_8->__data, VAR_14))
  return -VAR_0;
 VAR_8->optlen = VAR_14;

 if (FUNC_0(VAR_3, VAR_8, ((void*)0), &VAR_13))
  return -VAR_0;

 switch (VAR_6) {
 case 128:
 case 131:
  if (!VAR_8->srr)
   break;
  VAR_12 = VAR_6 == 128 ? VAR_8->is_strictroute :
            !VAR_8->is_strictroute;
  if (VAR_12)
   *VAR_5 = VAR_8->srr + VAR_11;
  break;
 case 129:
  if (!VAR_8->rr)
   break;
  *VAR_5 = VAR_8->rr + VAR_11;
  VAR_12 = 1;
  break;
 case 130:
  if (!VAR_8->router_alert)
   break;
  *VAR_5 = VAR_8->router_alert + VAR_11;
  VAR_12 = 1;
  break;
 default:
  return -VAR_2;
 }
 return VAR_12 ? VAR_6 : -VAR_1;
}
