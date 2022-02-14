
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_info_req {int type; } ;
struct l2cap_conn {int info_state; int info_ident; int info_timer; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct l2cap_conn*) ;
 int FUNC_2 (struct l2cap_conn*,int ,int ,int,struct l2cap_info_req*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct l2cap_conn *VAR_4)
{
 struct l2cap_info_req VAR_5;

 if (VAR_4->info_state & VAR_0)
  return;

 VAR_5.type = FUNC_0(VAR_3);

 VAR_4->info_state |= VAR_0;
 VAR_4->info_ident = FUNC_1(VAR_4);

 FUNC_3(&VAR_4->info_timer, VAR_2);

 FUNC_2(VAR_4, VAR_4->info_ident, VAR_1,
         sizeof(VAR_5), &VAR_5);
}
