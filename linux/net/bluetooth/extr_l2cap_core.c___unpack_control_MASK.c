
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct l2cap_chan {int flags; } ;
struct TYPE_2__ {int l2cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static inline void FUNC_7(struct l2cap_chan *VAR_3,
        struct sk_buff *VAR_4)
{
 if (FUNC_6(VAR_0, &VAR_3->flags)) {
  FUNC_1(FUNC_4(VAR_4->data),
       &FUNC_2(VAR_4)->l2cap);
  FUNC_5(VAR_4, VAR_2);
 } else {
  FUNC_0(FUNC_3(VAR_4->data),
       &FUNC_2(VAR_4)->l2cap);
  FUNC_5(VAR_4, VAR_1);
 }
}
