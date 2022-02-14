
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int dummy; } ;
struct lowpan_iphc_ctx {int dummy; } ;
struct TYPE_3__ {struct lowpan_iphc_ctx* table; } ;
struct TYPE_4__ {TYPE_1__ ctx; } ;


 TYPE_2__* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct lowpan_iphc_ctx*) ;

__attribute__((used)) static struct lowpan_iphc_ctx *
FUNC_2(const struct net_device *VAR_0, u8 VAR_1)
{
 struct lowpan_iphc_ctx *VAR_2 = &FUNC_0(VAR_0)->ctx.table[VAR_1];

 if (!FUNC_1(VAR_2))
  return ((void*)0);

 return VAR_2;
}
