
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct net_device* FUNC_1 (struct net*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;

void FUNC_5(struct net *VAR_2, const char *VAR_3)
{
 struct net_device *VAR_4;
 int VAR_5;

 FUNC_2();
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 FUNC_3();

 VAR_5 = !VAR_4;
 if (VAR_5 && FUNC_0(VAR_0))
  VAR_5 = FUNC_4("netdev-%s", VAR_3);
 if (VAR_5 && FUNC_0(VAR_1))
  FUNC_4("%s", VAR_3);
}
