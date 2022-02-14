
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2)
{




 FUNC_8();




 FUNC_0(VAR_1, &VAR_2->state);

 FUNC_7(VAR_2);
 if (VAR_2->flags & VAR_0 && FUNC_6(VAR_2)) {
  if (FUNC_5(VAR_2))
   FUNC_1(VAR_2);
  else
   FUNC_2(VAR_2);

  FUNC_4(VAR_2);
 }
 FUNC_3(VAR_2);
}
