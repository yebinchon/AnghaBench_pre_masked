
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int in6; int a4; } ;
struct TYPE_9__ {int spi; TYPE_1__ daddr; } ;
struct TYPE_7__ {int in6; int a4; } ;
struct TYPE_8__ {int reqid; TYPE_2__ saddr; int mode; int family; } ;
struct xfrm_state {TYPE_4__ id; TYPE_3__ props; } ;
struct nft_xfrm {size_t dreg; int key; } ;
struct TYPE_10__ {void* code; } ;
struct nft_regs {TYPE_5__ verdict; int * data; } ;
struct in6_addr {int dummy; } ;


 void* VAR_0 ;







 int FUNC_0 (int) ;

 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct nft_xfrm *VAR_1,
       struct nft_regs *VAR_2,
       const struct xfrm_state *VAR_3)
{
 u32 *VAR_4 = &VAR_2->data[VAR_1->dreg];

 if (!FUNC_2(VAR_1->key,
    VAR_3->props.family,
    VAR_3->props.mode)) {
  VAR_2->verdict.code = VAR_0;
  return;
 }

 switch (VAR_1->key) {
 case 129:
 case 128:
  FUNC_0(1);
  break;
 case 135:
  *VAR_4 = VAR_3->id.daddr.a4;
  return;
 case 134:
  FUNC_1(VAR_4, &VAR_3->id.daddr.in6, sizeof(struct in6_addr));
  return;
 case 132:
  *VAR_4 = VAR_3->props.saddr.a4;
  return;
 case 131:
  FUNC_1(VAR_4, &VAR_3->props.saddr.in6, sizeof(struct in6_addr));
  return;
 case 133:
  *VAR_4 = VAR_3->props.reqid;
  return;
 case 130:
  *VAR_4 = VAR_3->id.spi;
  return;
 }

 VAR_2->verdict.code = VAR_0;
}
