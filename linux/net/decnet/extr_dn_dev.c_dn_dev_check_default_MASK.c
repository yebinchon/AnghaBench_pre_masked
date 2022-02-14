
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 struct net_device* VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 FUNC_1(&VAR_1);
 if (VAR_2 == VAR_0) {
  VAR_0 = ((void*)0);
 } else {
  VAR_2 = ((void*)0);
 }
 FUNC_2(&VAR_1);

 if (VAR_2)
  FUNC_0(VAR_2);
}
