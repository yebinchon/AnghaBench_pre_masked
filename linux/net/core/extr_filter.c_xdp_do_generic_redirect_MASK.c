
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdp_buff {int dummy; } ;
struct sk_buff {struct net_device* dev; int len; } ;
struct net_device {int dummy; } ;
struct bpf_redirect_info {scalar_t__ tgt_index; int map; } ;
struct bpf_prog {int dummy; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 struct bpf_map* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct bpf_prog*,scalar_t__) ;
 int FUNC_2 (struct net_device*,struct bpf_prog*,scalar_t__,int) ;
 int VAR_1 ;
 struct net_device* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,struct bpf_prog*) ;
 struct bpf_redirect_info* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct net_device*,struct sk_buff*,struct xdp_buff*,struct bpf_prog*,struct bpf_map*) ;
 int FUNC_9 (struct net_device*,int ) ;

int FUNC_10(struct net_device *VAR_2, struct sk_buff *VAR_3,
       struct xdp_buff *VAR_4, struct bpf_prog *VAR_5)
{
 struct bpf_redirect_info *VAR_6 = FUNC_6(&VAR_1);
 struct bpf_map *VAR_7 = FUNC_0(VAR_6->map);
 u32 VAR_8 = VAR_6->tgt_index;
 struct net_device *VAR_9;
 int VAR_10 = 0;

 if (VAR_7)
  return FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_7);
 VAR_6->tgt_index = 0;
 VAR_9 = FUNC_3(FUNC_4(VAR_2), VAR_8);
 if (FUNC_7(!VAR_9)) {
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_10 = FUNC_9(VAR_9, VAR_3->len);
 if (FUNC_7(VAR_10))
  goto err;

 VAR_3->dev = VAR_9;
 FUNC_1(VAR_2, VAR_5, VAR_8);
 FUNC_5(VAR_3, VAR_5);
 return 0;
err:
 FUNC_2(VAR_2, VAR_5, VAR_8, VAR_10);
 return VAR_10;
}
