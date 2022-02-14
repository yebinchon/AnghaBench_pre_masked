
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
struct TYPE_8__ {int flags; int len; int u; } ;
struct nft_tunnel_obj {struct metadata_dst* md; TYPE_3__ opts; } ;
struct nft_object {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_9__ {int dst_cache; } ;
struct TYPE_7__ {TYPE_4__ tun_info; } ;
struct metadata_dst {TYPE_2__ u; } ;
struct TYPE_6__ {int tun_flags; void* ttl; void* tos; void* tp_dst; void* tp_src; int tun_id; } ;
struct ip_tunnel_info {TYPE_1__ key; int mode; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,struct ip_tunnel_info*,int) ;
 int FUNC_4 (struct ip_tunnel_info*,int ,int) ;
 struct metadata_dst* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct metadata_dst*) ;
 struct nft_tunnel_obj* FUNC_7 (struct nft_object*) ;
 int FUNC_8 (struct nft_ctx const*,struct nlattr const* const,struct ip_tunnel_info*) ;
 int FUNC_9 (struct nft_ctx const*,struct nlattr const* const,struct ip_tunnel_info*) ;
 int FUNC_10 (struct nft_ctx const*,struct nlattr const* const,struct ip_tunnel_info*,TYPE_3__*) ;
 void* FUNC_11 (struct nlattr const* const) ;
 int FUNC_12 (struct nlattr const* const) ;
 void* FUNC_13 (struct nlattr const* const) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(const struct nft_ctx *VAR_25,
          const struct nlattr * const VAR_26[],
          struct nft_object *VAR_27)
{
 struct nft_tunnel_obj *VAR_28 = FUNC_7(VAR_27);
 struct ip_tunnel_info VAR_29;
 struct metadata_dst *VAR_30;
 int VAR_31;

 if (!VAR_26[VAR_8])
  return -VAR_0;

 FUNC_4(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.mode = VAR_4;
 VAR_29.key.tun_id = FUNC_2(FUNC_12(VAR_26[VAR_8]));
 VAR_29.key.tun_flags = VAR_21 | VAR_19 | VAR_22;

 if (VAR_26[VAR_9]) {
  VAR_31 = FUNC_9(VAR_25, VAR_26[VAR_9], &VAR_29);
  if (VAR_31 < 0)
   return VAR_31;
 } else if (VAR_26[VAR_10]) {
  VAR_31 = FUNC_8(VAR_25, VAR_26[VAR_10], &VAR_29);
  if (VAR_31 < 0)
   return VAR_31;
 } else {
  return -VAR_0;
 }

 if (VAR_26[VAR_12]) {
  VAR_29.key.tp_src = FUNC_11(VAR_26[VAR_12]);
 }
 if (VAR_26[VAR_6]) {
  VAR_29.key.tp_dst = FUNC_11(VAR_26[VAR_6]);
 }

 if (VAR_26[VAR_7]) {
  u32 VAR_32;

  VAR_32 = FUNC_14(FUNC_12(VAR_26[VAR_7]));
  if (VAR_32 & ~VAR_16)
   return -VAR_2;

  if (VAR_32 & VAR_18)
   VAR_29.key.tun_flags &= ~VAR_19;
  if (VAR_32 & VAR_15)
   VAR_29.key.tun_flags |= VAR_20;
  if (VAR_32 & VAR_17)
   VAR_29.key.tun_flags |= VAR_23;
 }
 if (VAR_26[VAR_13])
  VAR_29.key.tos = FUNC_13(VAR_26[VAR_13]);
 if (VAR_26[VAR_14])
  VAR_29.key.ttl = FUNC_13(VAR_26[VAR_14]);
 else
  VAR_29.key.ttl = VAR_24;

 if (VAR_26[VAR_11]) {
  VAR_31 = FUNC_10(VAR_25, VAR_26[VAR_11],
            &VAR_29, &VAR_28->opts);
  if (VAR_31 < 0)
   return VAR_31;
 }

 VAR_30 = FUNC_5(VAR_28->opts.len, VAR_5, VAR_3);
 if (!VAR_30)
  return -VAR_1;

 FUNC_3(&VAR_30->u.tun_info, &VAR_29, sizeof(VAR_29));







 FUNC_1(&VAR_30->u.tun_info, &VAR_28->opts.u, VAR_28->opts.len,
    VAR_28->opts.flags);
 VAR_28->md = VAR_30;

 return 0;
}
