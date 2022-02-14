
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int flags; int v24_sig; int cfc; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct rfcomm_dlc *VAR_2)
{
 FUNC_0("dlc %p state %ld", VAR_2, VAR_2->state);

 if (!VAR_2->cfc) {
  VAR_2->v24_sig |= VAR_1;
  FUNC_2(VAR_0, &VAR_2->flags);
 }
 FUNC_1();
}
