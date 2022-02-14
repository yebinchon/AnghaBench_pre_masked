
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xfrm_policy {int dummy; } ;
struct xfrm_flo {int dst_orig; } ;
struct xfrm_dst {int num_pols; int num_xfrms; int pols; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfrm_dst* FUNC_0 (struct xfrm_dst*) ;
 struct xfrm_dst* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct xfrm_dst*) ;
 int VAR_2 ;
 int FUNC_3 (struct xfrm_dst*) ;
 int FUNC_4 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,struct xfrm_policy**,int) ;
 struct xfrm_dst* FUNC_6 (struct net*,struct xfrm_flo*,struct flowi const*,int,int ) ;
 int FUNC_7 (struct flowi const*,int ,struct xfrm_policy**,int*,int*) ;
 struct xfrm_policy* FUNC_8 (struct net*,struct flowi const*,int ,int ,int ) ;
 int FUNC_9 (struct xfrm_policy**,int) ;
 struct xfrm_dst* FUNC_10 (struct xfrm_policy**,int,struct flowi const*,int ,int ) ;

__attribute__((used)) static struct xfrm_dst *FUNC_11(struct net *VAR_4,
        const struct flowi *VAR_5,
        u16 VAR_6, u8 VAR_7,
        struct xfrm_flo *VAR_8, u32 VAR_9)
{
 struct xfrm_policy *VAR_10[VAR_3];
 int VAR_11 = 0, VAR_12 = 0, VAR_13;
 struct xfrm_dst *VAR_14;



 VAR_11 = 1;
 VAR_10[0] = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
 VAR_13 = FUNC_7(VAR_5, VAR_6, VAR_10,
        &VAR_11, &VAR_12);
 if (VAR_13 < 0)
  goto inc_error;
 if (VAR_11 == 0)
  return ((void*)0);
 if (VAR_12 <= 0)
  goto make_dummy_bundle;

 VAR_14 = FUNC_10(VAR_10, VAR_11, VAR_5, VAR_6,
           VAR_8->dst_orig);
 if (FUNC_2(VAR_14)) {
  VAR_13 = FUNC_3(VAR_14);
  if (VAR_13 == -VAR_1) {
   FUNC_9(VAR_10, VAR_11);
   return ((void*)0);
  }

  if (VAR_13 != -VAR_0)
   goto error;
  goto make_dummy_bundle;
 } else if (VAR_14 == ((void*)0)) {
  VAR_12 = 0;
  goto make_dummy_bundle;
 }

 return VAR_14;

make_dummy_bundle:



 VAR_14 = FUNC_6(VAR_4, VAR_8, VAR_5, VAR_12, VAR_6);
 if (FUNC_2(VAR_14)) {
  FUNC_9(VAR_10, VAR_11);
  return FUNC_0(VAR_14);
 }
 VAR_14->num_pols = VAR_11;
 VAR_14->num_xfrms = VAR_12;
 FUNC_5(VAR_14->pols, VAR_10, sizeof(struct xfrm_policy *) * VAR_11);

 return VAR_14;

inc_error:
 FUNC_4(VAR_4, VAR_2);
error:
 FUNC_9(VAR_10, VAR_11);
 return FUNC_1(VAR_13);
}
