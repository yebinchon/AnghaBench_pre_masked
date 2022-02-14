
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_4)
{
 if (VAR_3 & VAR_2)
  FUNC_0(VAR_4, "quirk SSP2_AIF2 enabled");
 if (VAR_3 & VAR_0)
  FUNC_0(VAR_4, "quirk SSP0_AIF1 enabled");
 if (VAR_3 & VAR_1)
  FUNC_0(VAR_4, "quirk SSP0_AIF2 enabled");
}
