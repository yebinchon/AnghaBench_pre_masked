
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lock; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 TYPE_1__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3.regs + VAR_2);

 FUNC_1(&VAR_3.lock);

 switch (VAR_4) {
 case 129:
  VAR_5 |= (VAR_1 | VAR_0);
  break;
 case 128:
  VAR_5 &= ~(VAR_1 | VAR_0);
  break;
 default:
  FUNC_2(&VAR_3.lock);
  return;
 }

 FUNC_3(VAR_5, VAR_3.regs + VAR_2);
 FUNC_2(&VAR_3.lock);
}
