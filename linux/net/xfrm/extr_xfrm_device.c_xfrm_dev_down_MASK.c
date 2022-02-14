
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 if (VAR_2->features & VAR_0)
  FUNC_1(FUNC_0(VAR_2), VAR_2, 1);

 return VAR_1;
}
