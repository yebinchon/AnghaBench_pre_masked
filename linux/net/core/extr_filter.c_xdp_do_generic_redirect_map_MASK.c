
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdp_sock {int dummy; } ;
struct xdp_buff {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bpf_redirect_info {int map; int * tgt_value; scalar_t__ tgt_index; } ;
struct bpf_prog {int dummy; } ;
struct bpf_map {scalar_t__ map_type; } ;
struct bpf_dtab_netdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*,struct bpf_prog*,void*,struct bpf_map*,scalar_t__) ;
 int FUNC_2 (struct net_device*,struct bpf_prog*,void*,struct bpf_map*,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct bpf_dtab_netdev*,struct sk_buff*,struct bpf_prog*) ;
 struct bpf_redirect_info* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct xdp_sock*,struct xdp_buff*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5,
           struct sk_buff *VAR_6,
           struct xdp_buff *VAR_7,
           struct bpf_prog *VAR_8,
           struct bpf_map *VAR_9)
{
 struct bpf_redirect_info *VAR_10 = FUNC_5(&VAR_4);
 u32 VAR_11 = VAR_10->tgt_index;
 void *VAR_12 = VAR_10->tgt_value;
 int VAR_13 = 0;

 VAR_10->tgt_index = 0;
 VAR_10->tgt_value = ((void*)0);
 FUNC_0(VAR_10->map, ((void*)0));

 if (VAR_9->map_type == VAR_0 ||
     VAR_9->map_type == VAR_1) {
  struct bpf_dtab_netdev *VAR_14 = VAR_12;

  VAR_13 = FUNC_4(VAR_14, VAR_6, VAR_8);
  if (FUNC_6(VAR_13))
   goto err;
 } else if (VAR_9->map_type == VAR_2) {
  struct xdp_sock *VAR_15 = VAR_12;

  VAR_13 = FUNC_7(VAR_15, VAR_7);
  if (VAR_13)
   goto err;
  FUNC_3(VAR_6);
 } else {

  VAR_13 = -VAR_3;
  goto err;
 }

 FUNC_1(VAR_5, VAR_8, VAR_12, VAR_9, VAR_11);
 return 0;
err:
 FUNC_2(VAR_5, VAR_8, VAR_12, VAR_9, VAR_11, VAR_13);
 return VAR_13;
}
