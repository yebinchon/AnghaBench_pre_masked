
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct l2cap_ctrl {int dummy; } ;
struct l2cap_chan {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct l2cap_ctrl*) ;
 int FUNC_1 (struct l2cap_ctrl*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline void FUNC_5(struct l2cap_chan *VAR_2,
      struct l2cap_ctrl *VAR_3,
      struct sk_buff *VAR_4)
{
 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_3(FUNC_1(VAR_3),
       VAR_4->data + VAR_1);
 } else {
  FUNC_2(FUNC_0(VAR_3),
       VAR_4->data + VAR_1);
 }
}
