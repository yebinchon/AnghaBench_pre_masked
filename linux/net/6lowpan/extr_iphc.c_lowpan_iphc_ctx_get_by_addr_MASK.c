
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct lowpan_iphc_ctx {int plen; int pfx; } ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {struct lowpan_iphc_ctx* table; } ;
struct TYPE_4__ {TYPE_1__ ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*,struct in6_addr const*,int) ;
 scalar_t__ FUNC_1 (struct in6_addr*,int *,int) ;
 TYPE_2__* FUNC_2 (struct net_device const*) ;
 int FUNC_3 (struct lowpan_iphc_ctx*) ;
 int FUNC_4 (struct lowpan_iphc_ctx*) ;

__attribute__((used)) static struct lowpan_iphc_ctx *
FUNC_5(const struct net_device *VAR_1,
       const struct in6_addr *VAR_2)
{
 struct lowpan_iphc_ctx *VAR_3 = FUNC_2(VAR_1)->ctx.table;
 struct lowpan_iphc_ctx *VAR_4 = ((void*)0);
 struct in6_addr VAR_5;
 u8 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {



  if (!FUNC_3(&VAR_3[VAR_7]) ||
      !FUNC_4(&VAR_3[VAR_7]))
   continue;

  FUNC_0(&VAR_5, VAR_2, VAR_3[VAR_7].plen);




  if (VAR_3[VAR_7].plen < 64)
   VAR_6 = 64;
  else
   VAR_6 = VAR_3[VAR_7].plen;

  if (FUNC_1(&VAR_5, &VAR_3[VAR_7].pfx, VAR_6)) {

   if (!VAR_4) {
    VAR_4 = &VAR_3[VAR_7];
    continue;
   }


   if (VAR_3[VAR_7].plen > VAR_4->plen)
    VAR_4 = &VAR_3[VAR_7];
  }
 }

 return VAR_4;
}
