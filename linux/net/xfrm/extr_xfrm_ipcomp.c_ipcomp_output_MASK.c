
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int spi; } ;
struct xfrm_state {TYPE_1__ id; struct ipcomp_data* data; } ;
struct sk_buff {scalar_t__ len; } ;
struct ipcomp_data {scalar_t__ threshold; } ;
struct ip_comp_hdr {int cpi; scalar_t__ flags; int nexthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ip_comp_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct xfrm_state*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int * FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ) ;

int FUNC_8(struct xfrm_state *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 struct ip_comp_hdr *VAR_4;
 struct ipcomp_data *VAR_5 = VAR_1->data;

 if (VAR_2->len < VAR_5->threshold) {

  goto out_ok;
 }

 if (FUNC_4(VAR_2))
  goto out_ok;

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (VAR_3) {
  goto out_ok;
 }


 VAR_4 = FUNC_1(VAR_2);
 VAR_4->nexthdr = *FUNC_5(VAR_2);
 VAR_4->flags = 0;
 VAR_4->cpi = FUNC_0((u16 )FUNC_3(VAR_1->id.spi));
 *FUNC_5(VAR_2) = VAR_0;
out_ok:
 FUNC_7(VAR_2, -FUNC_6(VAR_2));
 return 0;
}
