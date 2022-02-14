
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ip; } ;
struct TYPE_3__ {int ip; } ;
struct xt_hmark_info {int flags; TYPE_2__ dst_mask; TYPE_1__ src_mask; } ;
struct sk_buff {scalar_t__ data; } ;
struct iphdr {scalar_t__ protocol; int ihl; int saddr; int daddr; int frag_off; } ;
struct hmark_tuple {int src; int dst; scalar_t__ proto; } ;
typedef int _ip ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff const*,int,int*) ;
 int FUNC_2 (struct sk_buff const*,int,struct hmark_tuple*,struct xt_hmark_info const*) ;
 int FUNC_3 (int) ;
 struct iphdr* FUNC_4 (struct sk_buff const*,int,int,struct iphdr*) ;
 int FUNC_5 (struct sk_buff const*) ;

__attribute__((used)) static int
FUNC_6(const struct sk_buff *VAR_4, struct hmark_tuple *VAR_5,
     const struct xt_hmark_info *VAR_6)
{
 struct iphdr *VAR_7, VAR_8;
 int VAR_9 = FUNC_5(VAR_4);

 VAR_7 = (struct iphdr *) (VAR_4->data + VAR_9);
 if (VAR_7->protocol == VAR_0) {

  if (FUNC_1(VAR_4, VAR_7->ihl * 4, &VAR_9)) {
   VAR_7 = FUNC_4(VAR_4, VAR_9, sizeof(VAR_8), &VAR_8);
   if (VAR_7 == ((void*)0))
    return -1;
  }
 }

 VAR_5->src = VAR_7->saddr & VAR_6->src_mask.ip;
 VAR_5->dst = VAR_7->daddr & VAR_6->dst_mask.ip;

 if (VAR_6->flags & FUNC_0(VAR_3))
  return 0;

 VAR_5->proto = VAR_7->protocol;


 if (VAR_5->proto == VAR_0)
  return 0;


 if (VAR_7->frag_off & FUNC_3(VAR_1 | VAR_2))
  return 0;

 FUNC_2(VAR_4, (VAR_7->ihl * 4) + VAR_9, VAR_5, VAR_6);

 return 0;
}
