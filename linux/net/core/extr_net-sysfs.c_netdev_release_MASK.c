
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ reg_state; int ifalias; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct net_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2->reg_state != VAR_0);




 FUNC_1(FUNC_3(VAR_2->ifalias));
 FUNC_2(VAR_2);
}
