
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data_end; scalar_t__ data; } ;
struct iphdr {int dummy; } ;
struct eth_hdr {int eth_proto; int eth_dest; int eth_source; } ;


 scalar_t__ FUNC_0 (struct xdp_md*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static __attribute__ ((noinline))
bool FUNC_2(struct xdp_md *VAR_0, void **VAR_1, void **VAR_2)
{
 struct eth_hdr *VAR_3;
 struct eth_hdr *VAR_4;

 VAR_4 = *VAR_1;
 VAR_3 = *VAR_1 + sizeof(struct iphdr);
 FUNC_1(VAR_3->eth_source, VAR_4->eth_source, 6);
 FUNC_1(VAR_3->eth_dest, VAR_4->eth_dest, 6);
 VAR_3->eth_proto = 8;
 if (FUNC_0(VAR_0, (int)sizeof(struct iphdr)))
  return 0;
 *VAR_1 = (void *)(long)VAR_0->data;
 *VAR_2 = (void *)(long)VAR_0->data_end;
 return 1;
}
