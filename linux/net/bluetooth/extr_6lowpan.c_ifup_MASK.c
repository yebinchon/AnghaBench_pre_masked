
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 int VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0, ((void*)0));
 if (VAR_1 < 0)
  FUNC_0("iface %s cannot be opened (%d)", VAR_0->name, VAR_1);
 FUNC_3();
}
