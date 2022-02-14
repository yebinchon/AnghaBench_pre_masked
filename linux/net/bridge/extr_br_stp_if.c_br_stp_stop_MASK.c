
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ stp_enabled; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_bridge*,char*,int) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_bridge *VAR_2)
{
 int VAR_3;

 if (VAR_2->stp_enabled == VAR_1) {
  VAR_3 = FUNC_2(VAR_2, "stop");
  if (VAR_3)
   FUNC_0(VAR_2, "failed to stop userspace STP (%d)\n", VAR_3);


  FUNC_3(&VAR_2->lock);
  FUNC_1(VAR_2);
  FUNC_4(&VAR_2->lock);
 }

 VAR_2->stp_enabled = VAR_0;
}
