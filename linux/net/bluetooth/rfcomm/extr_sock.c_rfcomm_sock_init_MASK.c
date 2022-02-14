
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_type; } ;
struct rfcomm_pinfo {scalar_t__ role_switch; TYPE_1__* dlc; int sec_level; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ role_switch; int sec_level; scalar_t__ defer_setup; } ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 struct rfcomm_pinfo* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sock*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2, struct sock *VAR_3)
{
 struct rfcomm_pinfo *VAR_4 = FUNC_2(VAR_2);

 FUNC_0("sk %p", VAR_2);

 if (VAR_3) {
  VAR_2->sk_type = VAR_3->sk_type;
  VAR_4->dlc->defer_setup = FUNC_4(VAR_1,
      &FUNC_1(VAR_3)->flags);

  VAR_4->sec_level = FUNC_2(VAR_3)->sec_level;
  VAR_4->role_switch = FUNC_2(VAR_3)->role_switch;

  FUNC_3(VAR_3, VAR_2);
 } else {
  VAR_4->dlc->defer_setup = 0;

  VAR_4->sec_level = VAR_0;
  VAR_4->role_switch = 0;
 }

 VAR_4->dlc->sec_level = VAR_4->sec_level;
 VAR_4->dlc->role_switch = VAR_4->role_switch;
}
