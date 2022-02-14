
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a4; } ;
typedef TYPE_1__ xfrm_address_t ;
typedef int u32 ;
struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; } ;
struct net {int dummy; } ;
struct flowi4 {int flowi4_tos; int flowi4_flags; int saddr; int flowi4_mark; int flowi4_oif; int daddr; } ;


 struct dst_entry* FUNC_0 (struct rtable*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtable*) ;
 struct rtable* FUNC_2 (struct net*,struct flowi4*) ;
 int FUNC_3 (struct net*,int) ;
 int FUNC_4 (struct flowi4*,int ,int) ;

__attribute__((used)) static struct dst_entry *FUNC_5(struct net *VAR_1, struct flowi4 *VAR_2,
         int VAR_3, int VAR_4,
         const xfrm_address_t *VAR_5,
         const xfrm_address_t *VAR_6,
         u32 VAR_7)
{
 struct rtable *VAR_8;

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->daddr = VAR_6->a4;
 VAR_2->flowi4_tos = VAR_3;
 VAR_2->flowi4_oif = FUNC_3(VAR_1, VAR_4);
 VAR_2->flowi4_mark = VAR_7;
 if (VAR_5)
  VAR_2->saddr = VAR_5->a4;

 VAR_2->flowi4_flags = VAR_0;

 VAR_8 = FUNC_2(VAR_1, VAR_2);
 if (!FUNC_1(VAR_8))
  return &VAR_8->dst;

 return FUNC_0(VAR_8);
}
