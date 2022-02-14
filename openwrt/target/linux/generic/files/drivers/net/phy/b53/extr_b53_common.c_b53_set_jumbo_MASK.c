
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b53_device {int jumbo_size_reg; int jumbo_pm_reg; int enabled_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b53_device*,int ,int ,int ) ;
 int FUNC_1 (struct b53_device*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;
 scalar_t__ FUNC_3 (struct b53_device*) ;

__attribute__((used)) static int FUNC_4(struct b53_device *VAR_5, int VAR_6, int VAR_7)
{
 u32 VAR_8 = 0;
 u16 VAR_9 = VAR_3;

 if (FUNC_2(VAR_5) || FUNC_3(VAR_5))
  return -VAR_1;

 if (VAR_6) {
  VAR_8 = VAR_5->enabled_ports;
  VAR_9 = VAR_2;
  if (VAR_7)
   VAR_8 |= VAR_4;
 }

 FUNC_1(VAR_5, VAR_0, VAR_5->jumbo_pm_reg, VAR_8);
 return FUNC_0(VAR_5, VAR_0, VAR_5->jumbo_size_reg, VAR_9);
}
