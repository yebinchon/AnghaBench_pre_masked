
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(struct net *VAR_0, int VAR_1)
{

 struct net_device *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2();

 return VAR_2 != ((void*)0);
}
