
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; int protonum; int l3num; } ;
struct nft_offload_ctx {TYPE_1__ dep; } ;
typedef int __u8 ;
typedef int __u16 ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,int) ;

void FUNC_2(struct nft_offload_ctx *VAR_1,
       const void *VAR_2, u32 VAR_3)
{
 switch (VAR_1->dep.type) {
 case 129:
  FUNC_0(VAR_3 != sizeof(__u16));
  FUNC_1(&VAR_1->dep.l3num, VAR_2, sizeof(__u16));
  break;
 case 128:
  FUNC_0(VAR_3 != sizeof(__u8));
  FUNC_1(&VAR_1->dep.protonum, VAR_2, sizeof(__u8));
  break;
 default:
  break;
 }
 VAR_1->dep.type = VAR_0;
}
