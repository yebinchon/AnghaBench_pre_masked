
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ag71xx {int speed; int pllregmap; scalar_t__* plldata; scalar_t__* pllreg; } ;


 int FUNC_0 () ;



 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ag71xx *VAR_0)
{
 u32 VAR_1 = VAR_0->pllreg[1];
 u32 VAR_2;

 if (!VAR_0->pllregmap)
  return;

 switch (VAR_0->speed) {
 case 130:
  VAR_2 = VAR_0->plldata[2];
  break;
 case 129:
  VAR_2 = VAR_0->plldata[1];
  break;
 case 128:
  VAR_2 = VAR_0->plldata[0];
  break;
 default:
  FUNC_0();
 }

 if (VAR_2)
  FUNC_1(VAR_0->pllregmap, VAR_1, VAR_2);
}
