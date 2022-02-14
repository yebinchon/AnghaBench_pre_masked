
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
struct nlmsgerr {int msg; int error; } ;
struct net {int dummy; } ;
struct mr_table {int cache_resolve_queue_len; int net; } ;
struct TYPE_6__ {int unresolved; } ;
struct TYPE_7__ {TYPE_1__ unres; } ;
struct TYPE_8__ {TYPE_2__ mfc_un; } ;
struct mfc_cache {TYPE_3__ _c; } ;
struct iphdr {int dummy; } ;
struct TYPE_10__ {int portid; } ;
struct TYPE_9__ {scalar_t__ version; } ;


 int VAR_0 ;
 TYPE_5__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct mfc_cache*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int ,int) ;
 struct nlmsgerr* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (int) ;
 struct net* FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*,struct net*,int ) ;
 struct sk_buff* FUNC_10 (int *) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_13(struct mr_table *VAR_2, struct mfc_cache *VAR_3)
{
 struct net *VAR_4 = FUNC_8(&VAR_2->net);
 struct sk_buff *VAR_5;
 struct nlmsgerr *VAR_6;

 FUNC_1(&VAR_2->cache_resolve_queue_len);

 while ((VAR_5 = FUNC_10(&VAR_3->_c.mfc_un.unres.unresolved))) {
  if (FUNC_2(VAR_5)->version == 0) {
   struct nlmsghdr *VAR_7 = FUNC_11(VAR_5,
       sizeof(struct iphdr));
   VAR_7->nlmsg_type = VAR_1;
   VAR_7->nlmsg_len = FUNC_7(sizeof(struct nlmsgerr));
   FUNC_12(VAR_5, VAR_7->nlmsg_len);
   VAR_6 = FUNC_6(VAR_7);
   VAR_6->error = -VAR_0;
   FUNC_5(&VAR_6->msg, 0, sizeof(VAR_6->msg));

   FUNC_9(VAR_5, VAR_4, FUNC_0(VAR_5).portid);
  } else {
   FUNC_4(VAR_5);
  }
 }

 FUNC_3(VAR_3);
}
