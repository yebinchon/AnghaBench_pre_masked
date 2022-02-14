
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ mark; } ;
struct dst_entry {int dummy; } ;
struct dn_skb_cb {scalar_t__ src; scalar_t__ dst; scalar_t__ iif; } ;
struct TYPE_3__ {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ flowidn_oif; scalar_t__ flowidn_mark; scalar_t__ flowidn_iif; } ;
struct dn_route {int dst; TYPE_1__ fld; int dn_next; } ;
struct TYPE_4__ {int chain; } ;


 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 struct dn_route* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct dst_entry*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2)
{
 struct dn_route *VAR_3;
 struct dn_skb_cb *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_4->src, VAR_4->dst);

 if (FUNC_7(VAR_2))
  return 0;

 FUNC_5();
 for(VAR_3 = FUNC_4(VAR_0[VAR_5].chain); VAR_3 != ((void*)0);
     VAR_3 = FUNC_4(VAR_3->dn_next)) {
  if ((VAR_3->fld.saddr == VAR_4->src) &&
      (VAR_3->fld.daddr == VAR_4->dst) &&
      (VAR_3->fld.flowidn_oif == 0) &&
      (VAR_3->fld.flowidn_mark == VAR_2->mark) &&
      (VAR_3->fld.flowidn_iif == VAR_4->iif)) {
   FUNC_3(&VAR_3->dst, VAR_1);
   FUNC_6();
   FUNC_8(VAR_2, (struct dst_entry *)VAR_3);
   return 0;
  }
 }
 FUNC_6();

 return FUNC_2(VAR_2);
}
