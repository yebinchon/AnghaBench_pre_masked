
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdspm {int control_register; int settings_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hdspm*) ;
 int FUNC_1 (struct hdspm*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hdspm *VAR_2, u32 VAR_3, int VAR_4)
{
 u32 *VAR_5;
 u32 VAR_6;

 if (FUNC_0(VAR_2)) {
  VAR_5 = &(VAR_2->settings_register);
  VAR_6 = VAR_0;
 } else {
  VAR_5 = &(VAR_2->control_register);
  VAR_6 = VAR_1;
 }

 if (VAR_4)
  *VAR_5 |= VAR_3;
 else
  *VAR_5 &= ~VAR_3;

 FUNC_1(VAR_2, VAR_6, *VAR_5);

 return 0;
}
