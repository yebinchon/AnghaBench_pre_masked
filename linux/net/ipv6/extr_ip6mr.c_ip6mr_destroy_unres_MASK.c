
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_type; } ;
struct nlmsgerr {int error; } ;
struct net {int dummy; } ;
struct mr_table {int cache_resolve_queue_len; int net; } ;
struct TYPE_6__ {int unresolved; } ;
struct TYPE_7__ {TYPE_1__ unres; } ;
struct TYPE_8__ {TYPE_2__ mfc_un; } ;
struct mfc6_cache {TYPE_3__ _c; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_10__ {int portid; } ;
struct TYPE_9__ {scalar_t__ version; } ;


 int VAR_0 ;
 TYPE_5__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mfc6_cache*) ;
 TYPE_4__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (int) ;
 struct net* FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,struct net*,int ) ;
 struct sk_buff* FUNC_9 (int *) ;
 struct nlmsghdr* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_12(struct mr_table *VAR_2, struct mfc6_cache *VAR_3)
{
 struct net *VAR_4 = FUNC_7(&VAR_2->net);
 struct sk_buff *VAR_5;

 FUNC_1(&VAR_2->cache_resolve_queue_len);

 while ((VAR_5 = FUNC_9(&VAR_3->_c.mfc_un.unres.unresolved)) != ((void*)0)) {
  if (FUNC_3(VAR_5)->version == 0) {
   struct nlmsghdr *VAR_6 = FUNC_10(VAR_5,
       sizeof(struct ipv6hdr));
   VAR_6->nlmsg_type = VAR_1;
   VAR_6->nlmsg_len = FUNC_6(sizeof(struct nlmsgerr));
   FUNC_11(VAR_5, VAR_6->nlmsg_len);
   ((struct nlmsgerr *)FUNC_5(VAR_6))->error = -VAR_0;
   FUNC_8(VAR_5, VAR_4, FUNC_0(VAR_5).portid);
  } else
   FUNC_4(VAR_5);
 }

 FUNC_2(VAR_3);
}
