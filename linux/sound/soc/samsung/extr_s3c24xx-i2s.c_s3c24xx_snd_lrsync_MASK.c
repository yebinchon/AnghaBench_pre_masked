
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{
 u32 VAR_4;
 int VAR_5 = 50;

 while (1) {
  VAR_4 = FUNC_0(VAR_3.regs + VAR_1);
  if (VAR_4 & VAR_2)
   break;

  if (!VAR_5--)
   return -VAR_0;
  FUNC_1(100);
 }

 return 0;
}
