
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data_end; scalar_t__ data; } ;
struct eth_hdr {int eth_proto; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int,void*,int,struct xdp_md*) ;

__attribute__ ((section("xdp-test"), used))
int FUNC_2(struct xdp_md *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_3->data;
 void *VAR_5 = (void *)(long)VAR_3->data_end;
 struct eth_hdr *VAR_6 = VAR_4;
 __u32 VAR_7;
 __u32 VAR_8;

 VAR_8 = sizeof(struct eth_hdr);
 if (VAR_4 + VAR_8 > VAR_5)
  return VAR_2;
 VAR_7 = FUNC_0(VAR_6->eth_proto);
 if (VAR_7 == VAR_0)
  return FUNC_1(VAR_4, VAR_8, VAR_5, 0, VAR_3);
 else if (VAR_7 == VAR_1)
  return FUNC_1(VAR_4, VAR_8, VAR_5, 1, VAR_3);
 else
  return VAR_2;
}
