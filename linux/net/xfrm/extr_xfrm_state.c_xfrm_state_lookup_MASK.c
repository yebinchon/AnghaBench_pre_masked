
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;


 struct xfrm_state* FUNC_0 (struct net*,int ,int const*,int ,int ,unsigned short) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct xfrm_state *
FUNC_3(struct net *VAR_0, u32 VAR_1, const xfrm_address_t *VAR_2, __be32 VAR_3,
    u8 VAR_4, unsigned short VAR_5)
{
 struct xfrm_state *VAR_6;

 FUNC_1();
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2();
 return VAR_6;
}
