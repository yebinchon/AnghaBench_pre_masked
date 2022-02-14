
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct TYPE_8__ {int a4; } ;
struct TYPE_9__ {TYPE_3__ saddr; } ;
struct TYPE_6__ {int a4; } ;
struct TYPE_7__ {TYPE_1__ daddr; } ;
struct TYPE_10__ {int v; int m; } ;
struct xfrm_state {int tunnel_users; struct xfrm_state* tunnel; TYPE_4__ props; TYPE_2__ id; TYPE_5__ mark; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct xfrm_state* FUNC_1 (struct xfrm_state*) ;
 int FUNC_2 (struct xfrm_state*) ;
 int FUNC_3 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_4 (struct net*,int,int *,int ,int ,int ) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3)
{
 struct net *VAR_4 = FUNC_5(VAR_3);
 int VAR_5 = 0;
 struct xfrm_state *VAR_6;
 u32 VAR_7 = VAR_3->mark.v & VAR_3->mark.m;

 VAR_6 = FUNC_4(VAR_4, VAR_7, (xfrm_address_t *)&VAR_3->id.daddr.a4,
         VAR_3->props.saddr.a4, VAR_2, VAR_0);
 if (!VAR_6) {
  VAR_6 = FUNC_1(VAR_3);
  if (!VAR_6) {
   VAR_5 = -VAR_1;
   goto out;
  }
  FUNC_3(VAR_6);
  FUNC_2(VAR_6);
 }
 VAR_3->tunnel = VAR_6;
 FUNC_0(&VAR_6->tunnel_users);
out:
 return VAR_5;
}
