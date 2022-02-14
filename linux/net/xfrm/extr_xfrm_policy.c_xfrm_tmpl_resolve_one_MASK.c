
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_3__ {int daddr; } ;
struct xfrm_tmpl {scalar_t__ mode; int optional; int encap_family; int saddr; TYPE_1__ id; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct xfrm_state {TYPE_2__ km; } ;
struct xfrm_policy {int xfrm_nr; int if_id; struct xfrm_tmpl* xfrm_vec; } ;
struct net {int dummy; } ;
struct flowi {int flowi_oif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (struct flowi const*,unsigned short) ;
 int * FUNC_2 (struct flowi const*,unsigned short) ;
 int FUNC_3 (struct net*,int ,int *,int *,int ,int ) ;
 struct xfrm_state* FUNC_4 (int *,int *,struct flowi const*,struct xfrm_tmpl*,struct xfrm_policy*,int*,unsigned short,int ) ;
 int FUNC_5 (struct xfrm_state*) ;
 struct net* FUNC_6 (struct xfrm_policy*) ;

__attribute__((used)) static int
FUNC_7(struct xfrm_policy *VAR_7, const struct flowi *VAR_8,
        struct xfrm_state **VAR_9, unsigned short VAR_10)
{
 struct net *VAR_11 = FUNC_6(VAR_7);
 int VAR_12;
 int VAR_13, VAR_14;
 xfrm_address_t *VAR_15 = FUNC_1(VAR_8, VAR_10);
 xfrm_address_t *VAR_16 = FUNC_2(VAR_8, VAR_10);
 xfrm_address_t VAR_17;

 for (VAR_12 = 0, VAR_13 = 0; VAR_13 < VAR_7->xfrm_nr; VAR_13++) {
  struct xfrm_state *VAR_18;
  xfrm_address_t *VAR_19 = VAR_15;
  xfrm_address_t *VAR_20 = VAR_16;
  struct xfrm_tmpl *VAR_21 = &VAR_7->xfrm_vec[VAR_13];

  if (VAR_21->mode == VAR_4 ||
      VAR_21->mode == VAR_3) {
   VAR_19 = &VAR_21->id.daddr;
   VAR_20 = &VAR_21->saddr;
   if (FUNC_0(VAR_20, VAR_21->encap_family)) {
    VAR_14 = FUNC_3(VAR_11, VAR_8->flowi_oif,
             &VAR_17, VAR_19,
             VAR_21->encap_family, 0);
    if (VAR_14)
     goto fail;
    VAR_20 = &VAR_17;
   }
  }

  VAR_18 = FUNC_4(VAR_19, VAR_20, VAR_8, VAR_21, VAR_7, &VAR_14,
        VAR_10, VAR_7->if_id);

  if (VAR_18 && VAR_18->km.state == VAR_6) {
   VAR_9[VAR_12++] = VAR_18;
   VAR_15 = VAR_19;
   VAR_16 = VAR_20;
   continue;
  }
  if (VAR_18) {
   VAR_14 = (VAR_18->km.state == VAR_5 ?
     -VAR_1 : -VAR_0);
   FUNC_5(VAR_18);
  } else if (VAR_14 == -VAR_2) {
   VAR_14 = -VAR_0;
  }

  if (!VAR_21->optional)
   goto fail;
 }
 return VAR_12;

fail:
 for (VAR_12--; VAR_12 >= 0; VAR_12--)
  FUNC_5(VAR_9[VAR_12]);
 return VAR_14;
}
