
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ retrans_timeout; int retrans_timer; int monitor_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct l2cap_chan*,int *,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_0)
{
 if (!FUNC_0(&VAR_0->monitor_timer) &&
     VAR_0->retrans_timeout) {
  FUNC_1(VAR_0, &VAR_0->retrans_timer,
    FUNC_2(VAR_0->retrans_timeout));
 }
}
