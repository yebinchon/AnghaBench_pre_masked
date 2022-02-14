
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_chan {int state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* state_change ) (struct l2cap_chan*,int ,int) ;} ;


 int FUNC_0 (struct l2cap_chan*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct l2cap_chan *VAR_0, int VAR_1)
{
 VAR_0->ops->state_change(VAR_0, VAR_0->state, VAR_1);
}
