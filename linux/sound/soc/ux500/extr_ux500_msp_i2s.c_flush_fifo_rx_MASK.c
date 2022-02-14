
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ux500_msp {scalar_t__ registers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ux500_msp *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 32;

 VAR_7 = FUNC_0(VAR_5->registers + VAR_2);
 FUNC_1(VAR_7 | VAR_3, VAR_5->registers + VAR_2);

 VAR_8 = FUNC_0(VAR_5->registers + VAR_1);
 while (!(VAR_8 & VAR_4) && VAR_9--) {
  VAR_6 = FUNC_0(VAR_5->registers + VAR_0);
  VAR_8 = FUNC_0(VAR_5->registers + VAR_1);
 }

 FUNC_1(VAR_7, VAR_5->registers + VAR_2);
}
