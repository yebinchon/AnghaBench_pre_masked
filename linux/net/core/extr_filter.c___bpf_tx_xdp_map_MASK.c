
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_sock {int dummy; } ;
struct xdp_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bpf_map {int map_type; } ;
struct bpf_dtab_netdev {int dummy; } ;
struct bpf_cpu_map_entry {int dummy; } ;






 int FUNC_0 (struct bpf_map*,struct xdp_buff*,struct xdp_sock*) ;
 int FUNC_1 (struct bpf_cpu_map_entry*,struct xdp_buff*,struct net_device*) ;
 int FUNC_2 (struct bpf_dtab_netdev*,struct xdp_buff*,struct net_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, void *VAR_1,
       struct bpf_map *VAR_2,
       struct xdp_buff *VAR_3,
       u32 VAR_4)
{
 int VAR_5;

 switch (VAR_2->map_type) {
 case 130:
 case 129: {
  struct bpf_dtab_netdev *VAR_6 = VAR_1;

  VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_0);
  if (FUNC_3(VAR_5))
   return VAR_5;
  break;
 }
 case 131: {
  struct bpf_cpu_map_entry *VAR_7 = VAR_1;

  VAR_5 = FUNC_1(VAR_7, VAR_3, VAR_0);
  if (FUNC_3(VAR_5))
   return VAR_5;
  break;
 }
 case 128: {
  struct xdp_sock *VAR_8 = VAR_1;

  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_8);
  return VAR_5;
 }
 default:
  break;
 }
 return 0;
}
