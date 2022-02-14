
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdp_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bpf_redirect_info {struct bpf_map* map_to_flush; int map; int * tgt_value; scalar_t__ tgt_index; } ;
struct bpf_prog {int dummy; } ;
struct bpf_map {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*,void*,struct bpf_map*,struct xdp_buff*,scalar_t__) ;
 int FUNC_2 (struct net_device*,struct bpf_prog*,void*,struct bpf_map*,scalar_t__) ;
 int FUNC_3 (struct net_device*,struct bpf_prog*,void*,struct bpf_map*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, struct xdp_buff *VAR_1,
          struct bpf_prog *VAR_2, struct bpf_map *VAR_3,
          struct bpf_redirect_info *VAR_4)
{
 u32 VAR_5 = VAR_4->tgt_index;
 void *VAR_6 = VAR_4->tgt_value;
 int VAR_7;

 VAR_4->tgt_index = 0;
 VAR_4->tgt_value = ((void*)0);
 FUNC_0(VAR_4->map, ((void*)0));

 if (VAR_4->map_to_flush && FUNC_4(VAR_4->map_to_flush != VAR_3))
  FUNC_5();

 VAR_7 = FUNC_1(VAR_0, VAR_6, VAR_3, VAR_1, VAR_5);
 if (FUNC_4(VAR_7))
  goto err;

 VAR_4->map_to_flush = VAR_3;
 FUNC_2(VAR_0, VAR_2, VAR_6, VAR_3, VAR_5);
 return 0;
err:
 FUNC_3(VAR_0, VAR_2, VAR_6, VAR_3, VAR_5, VAR_7);
 return VAR_7;
}
