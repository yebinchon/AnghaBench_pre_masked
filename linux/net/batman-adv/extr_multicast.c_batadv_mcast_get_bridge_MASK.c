
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct net_device *FUNC_4(struct net_device *VAR_1)
{
 struct net_device *VAR_2 = VAR_1;

 FUNC_2();
 do {
  VAR_2 = FUNC_1(VAR_2);
 } while (VAR_2 && !(VAR_2->priv_flags & VAR_0));

 if (VAR_2)
  FUNC_0(VAR_2);
 FUNC_3();

 return VAR_2;
}
