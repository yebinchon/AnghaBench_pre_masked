
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ move_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct l2cap_chan *VAR_2)
{
 return VAR_2->move_state != VAR_0 &&
        VAR_2->move_state != VAR_1;
}
