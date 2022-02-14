
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rfcomm_dlc {int flags; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ) ;
 int VAR_0 ;
 struct rfcomm_dlc* VAR_1 ;
 struct rfcomm_dlc* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct rfcomm_dlc *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);

 FUNC_0("dlc %p state %ld", VAR_4, VAR_4->state);

 FUNC_4(VAR_0, &VAR_4->flags);
 FUNC_2(VAR_4);
 FUNC_3();
}
