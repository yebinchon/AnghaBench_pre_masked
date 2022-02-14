
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_usersa_flush {int proto; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int proto; } ;
struct km_event {TYPE_1__ data; int seq; int portid; struct net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 struct xfrm_usersa_flush* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_6 (struct net*,struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(const struct km_event *VAR_5)
{
 struct net *VAR_6 = VAR_5->net;
 struct xfrm_usersa_flush *VAR_7;
 struct nlmsghdr *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10 = FUNC_0(sizeof(struct xfrm_usersa_flush));

 VAR_9 = FUNC_4(VAR_10, VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_9, VAR_5->portid, VAR_5->seq, VAR_4, sizeof(*VAR_7), 0);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_8);
 VAR_7->proto = VAR_5->data.proto;

 FUNC_3(VAR_9, VAR_8);

 return FUNC_6(VAR_6, VAR_9, 0, VAR_3);
}
