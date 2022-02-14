
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct net_device*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7;

 FUNC_2(VAR_4);

 VAR_5 = VAR_6 = VAR_3;
 VAR_7 = FUNC_5(VAR_4);

 while (VAR_7 != 0) {
  if (FUNC_10(VAR_3, VAR_5 + 1 * VAR_0)) {
   FUNC_8();


   FUNC_1(VAR_1, VAR_4);

   FUNC_0();
   FUNC_7();
   FUNC_8();

   if (FUNC_9(VAR_2,
         &VAR_4->state)) {






    FUNC_3();
   }

   FUNC_0();

   VAR_5 = VAR_3;
  }

  FUNC_4(250);

  VAR_7 = FUNC_5(VAR_4);

  if (VAR_7 && FUNC_10(VAR_3, VAR_6 + 10 * VAR_0)) {
   FUNC_6("unregister_netdevice: waiting for %s to become free. Usage count = %d\n",
     VAR_4->name, VAR_7);
   VAR_6 = VAR_3;
  }
 }
}
