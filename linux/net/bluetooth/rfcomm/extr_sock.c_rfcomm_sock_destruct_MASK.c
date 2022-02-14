
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; int sk_receive_queue; } ;
struct rfcomm_dlc {struct sock* owner; } ;
struct TYPE_2__ {struct rfcomm_dlc* dlc; } ;


 int FUNC_0 (char*,struct sock*,struct rfcomm_dlc*) ;
 int FUNC_1 (struct rfcomm_dlc*) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 (struct rfcomm_dlc*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0)
{
 struct rfcomm_dlc *VAR_1 = FUNC_4(VAR_0)->dlc;

 FUNC_0("sk %p dlc %p", VAR_0, VAR_1);

 FUNC_5(&VAR_0->sk_receive_queue);
 FUNC_5(&VAR_0->sk_write_queue);

 FUNC_1(VAR_1);
 FUNC_4(VAR_0)->dlc = ((void*)0);


 if (VAR_1->owner == VAR_0)
  VAR_1->owner = ((void*)0);
 FUNC_3(VAR_1);

 FUNC_2(VAR_1);
}
