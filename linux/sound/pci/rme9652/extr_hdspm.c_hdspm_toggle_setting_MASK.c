
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdspm {int settings_register; int control_register; } ;


 scalar_t__ FUNC_0 (struct hdspm*) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 if (FUNC_0(VAR_0))
  VAR_2 = VAR_0->settings_register;
 else
  VAR_2 = VAR_0->control_register;

 return (VAR_2 & VAR_1) ? 1 : 0;
}
