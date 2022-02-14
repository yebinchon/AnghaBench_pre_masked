
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_dlc {int v24_sig; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ,int ) ;

int FUNC_1(struct rfcomm_dlc *VAR_0, u8 *VAR_1)
{
 FUNC_0("dlc %p state %ld v24_sig 0x%x",
   VAR_0, VAR_0->state, VAR_0->v24_sig);

 *VAR_1 = VAR_0->v24_sig;
 return 0;
}
