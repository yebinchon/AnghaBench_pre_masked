
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct device *VAR_6)
{
 if (FUNC_0(VAR_5) == VAR_0)
  FUNC_1(VAR_6, "quirk IN1_MAP enabled");
 if (FUNC_0(VAR_5) == VAR_1)
  FUNC_1(VAR_6, "quirk IN2_MAP enabled");
 if (VAR_5 & VAR_4)
  FUNC_1(VAR_6, "quirk SSP0 enabled");
 if (VAR_5 & VAR_3)
  FUNC_1(VAR_6, "quirk MONO_SPEAKER enabled\n");
 if (VAR_5 & VAR_2)
  FUNC_1(VAR_6, "quirk JD_INVERTED enabled\n");
}
