
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_dlc {int flags; int v24_sig; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct rfcomm_dlc *VAR_3, u8 VAR_4)
{
 FUNC_0("dlc %p state %ld v24_sig 0x%x",
   VAR_3, VAR_3->state, VAR_4);

 if (FUNC_3(VAR_1, &VAR_3->flags))
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;

 VAR_3->v24_sig = VAR_4;

 if (!FUNC_2(VAR_0, &VAR_3->flags))
  FUNC_1();

 return 0;
}
