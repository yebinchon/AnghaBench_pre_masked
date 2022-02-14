
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u8 ;
struct TYPE_2__ {int state_hmask; } ;
struct net {TYPE_1__ xfrm; } ;
typedef int __be32 ;


 unsigned int FUNC_0 (int const*,int ,int ,unsigned short,int ) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct net *VAR_0, const xfrm_address_t *VAR_1,
       __be32 VAR_2, u8 VAR_3, unsigned short VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0->xfrm.state_hmask);
}
