
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_omem_alloc; } ;
struct ip_sf_socklist {int sl_max; int * sl_addr; int sl_count; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ imr_multiaddr; } ;
struct ip_mc_socklist {int sflist; int sfmode; TYPE_2__ multi; } ;
struct in_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct in_device*,int *,int ,int ,int *,int ) ;
 int FUNC_4 (struct ip_sf_socklist*,int ) ;
 int VAR_0 ;
 struct ip_sf_socklist* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_1, struct ip_mc_socklist *VAR_2,
      struct in_device *VAR_3)
{
 struct ip_sf_socklist *VAR_4 = FUNC_5(VAR_2->sflist);
 int VAR_5;

 if (!VAR_4) {

  return FUNC_3(VAR_3, &VAR_2->multi.imr_multiaddr.s_addr,
   VAR_2->sfmode, 0, ((void*)0), 0);
 }
 VAR_5 = FUNC_3(VAR_3, &VAR_2->multi.imr_multiaddr.s_addr,
   VAR_2->sfmode, VAR_4->sl_count, VAR_4->sl_addr, 0);
 FUNC_1(VAR_2->sflist, ((void*)0));

 FUNC_2(FUNC_0(VAR_4->sl_max), &VAR_1->sk_omem_alloc);
 FUNC_4(VAR_4, VAR_0);
 return VAR_5;
}
