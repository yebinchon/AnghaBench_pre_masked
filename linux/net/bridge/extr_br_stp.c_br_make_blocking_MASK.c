
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ state; int forward_delay_timer; int br; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge_port*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_bridge_port *VAR_5)
{
 if (VAR_5->state != VAR_1 &&
     VAR_5->state != VAR_0) {
  if (VAR_5->state == VAR_2 ||
      VAR_5->state == VAR_3)
   FUNC_2(VAR_5->br);

  FUNC_1(VAR_5, VAR_0);
  FUNC_0(VAR_4, ((void*)0), VAR_5);

  FUNC_3(&VAR_5->forward_delay_timer);
 }
}
