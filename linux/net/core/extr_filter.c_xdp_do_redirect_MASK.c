
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bpf_redirect_info {int map; } ;
struct bpf_prog {int dummy; } ;
struct bpf_map {int dummy; } ;


 struct bpf_map* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bpf_map*) ;
 struct bpf_redirect_info* FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,struct xdp_buff*,struct bpf_prog*,struct bpf_map*,struct bpf_redirect_info*) ;
 int FUNC_4 (struct net_device*,struct xdp_buff*,struct bpf_prog*,struct bpf_redirect_info*) ;

int FUNC_5(struct net_device *VAR_1, struct xdp_buff *VAR_2,
      struct bpf_prog *VAR_3)
{
 struct bpf_redirect_info *VAR_4 = FUNC_2(&VAR_0);
 struct bpf_map *VAR_5 = FUNC_0(VAR_4->map);

 if (FUNC_1(VAR_5))
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);

 return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
}
