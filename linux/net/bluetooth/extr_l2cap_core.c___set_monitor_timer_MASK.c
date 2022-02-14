
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ monitor_timeout; int monitor_timer; } ;


 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*,int *,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->monitor_timeout) {
  FUNC_1(VAR_0, &VAR_0->monitor_timer,
    FUNC_2(VAR_0->monitor_timeout));
 }
}
