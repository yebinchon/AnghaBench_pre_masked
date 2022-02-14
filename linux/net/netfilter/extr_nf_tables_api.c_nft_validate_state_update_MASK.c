
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int validate_state; } ;
struct net {TYPE_1__ nft; } ;





 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct net *VAR_0, u8 VAR_1)
{
 switch (VAR_0->nft.validate_state) {
 case 128:
  FUNC_0(VAR_1 == 130);
  break;
 case 129:
  break;
 case 130:
  if (VAR_1 == 129)
   return;
 }

 VAR_0->nft.validate_state = VAR_1;
}
