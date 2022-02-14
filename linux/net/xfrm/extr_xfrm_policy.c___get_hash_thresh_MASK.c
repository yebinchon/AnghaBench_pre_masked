
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* policy_bydst; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_3__ {int sbits6; int dbits6; int sbits4; int dbits4; } ;





__attribute__((used)) static void FUNC_0(struct net *VAR_0,
         unsigned short VAR_1, int VAR_2,
         u8 *VAR_3, u8 *VAR_4)
{
 switch (VAR_1) {
 case 129:
  *VAR_3 = VAR_0->xfrm.policy_bydst[VAR_2].dbits4;
  *VAR_4 = VAR_0->xfrm.policy_bydst[VAR_2].sbits4;
  break;

 case 128:
  *VAR_3 = VAR_0->xfrm.policy_bydst[VAR_2].dbits6;
  *VAR_4 = VAR_0->xfrm.policy_bydst[VAR_2].sbits6;
  break;

 default:
  *VAR_3 = 0;
  *VAR_4 = 0;
 }
}
