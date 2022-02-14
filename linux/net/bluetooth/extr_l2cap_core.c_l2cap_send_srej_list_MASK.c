
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct l2cap_ctrl {int sframe; scalar_t__ reqseq; int super; } ;
struct TYPE_3__ {scalar_t__ head; } ;
struct l2cap_chan {TYPE_1__ srej_list; } ;
typedef int control ;


 int FUNC_0 (char*,struct l2cap_chan*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct l2cap_ctrl*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_2, u16 VAR_3)
{
 struct l2cap_ctrl VAR_4;
 u16 VAR_5;
 u16 VAR_6;

 FUNC_0("chan %p, txseq %u", VAR_2, VAR_3);

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.sframe = 1;
 VAR_4.super = VAR_1;


 VAR_5 = VAR_2->srej_list.head;

 do {
  VAR_6 = FUNC_3(&VAR_2->srej_list);
  if (VAR_6 == VAR_3 || VAR_6 == VAR_0)
   break;

  VAR_4.reqseq = VAR_6;
  FUNC_1(VAR_2, &VAR_4);
  FUNC_2(&VAR_2->srej_list, VAR_6);
 } while (VAR_2->srej_list.head != VAR_5);
}
