
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_2__ {int state_hmask; } ;
struct net {TYPE_1__ xfrm; } ;


 unsigned int FUNC_0 (int const*,int const*,unsigned short,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct net *VAR_0,
      const xfrm_address_t *VAR_1,
      const xfrm_address_t *VAR_2,
      unsigned short VAR_3)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0->xfrm.state_hmask);
}
