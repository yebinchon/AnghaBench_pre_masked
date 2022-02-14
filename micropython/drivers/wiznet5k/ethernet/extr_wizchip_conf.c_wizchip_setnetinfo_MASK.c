
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dhcp; int * dns; int * sn; int ip; int gw; int mac; } ;
typedef TYPE_1__ wiz_NetInfo ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(wiz_NetInfo* VAR_3)
{
   FUNC_1(VAR_3->mac);
   FUNC_0(VAR_3->gw);
   FUNC_3(VAR_3->sn);
   FUNC_2(VAR_3->ip);






   VAR_1[0] = VAR_3->dns[0];
   VAR_1[1] = VAR_3->dns[1];
   VAR_1[2] = VAR_3->dns[2];
   VAR_1[3] = VAR_3->dns[3];
   VAR_0 = VAR_3->dhcp;
}
