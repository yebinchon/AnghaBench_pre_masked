
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int v24_sig; int rx_credits; int cfc; int mtu; int sec_level; scalar_t__ mscex; scalar_t__ flags; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct rfcomm_dlc *VAR_8)
{
 FUNC_0("%p", VAR_8);

 VAR_8->state = VAR_0;
 VAR_8->flags = 0;
 VAR_8->mscex = 0;
 VAR_8->sec_level = VAR_1;
 VAR_8->mtu = VAR_4;
 VAR_8->v24_sig = VAR_6 | VAR_7 | VAR_5;

 VAR_8->cfc = VAR_2;
 VAR_8->rx_credits = VAR_3;
}
