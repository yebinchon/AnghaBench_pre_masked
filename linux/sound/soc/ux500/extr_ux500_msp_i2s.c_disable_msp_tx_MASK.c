
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ux500_msp {int dir_busy; scalar_t__ registers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ux500_msp *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_8->registers + VAR_2);
 FUNC_1(VAR_9 & ~VAR_5, VAR_8->registers + VAR_2);
 VAR_10 = FUNC_0(VAR_8->registers + VAR_1);
 FUNC_1(VAR_10 & ~VAR_4, VAR_8->registers + VAR_1);
 VAR_11 = FUNC_0(VAR_8->registers + VAR_3);
 FUNC_1(VAR_11 &
   ~(VAR_6 | VAR_7),
   VAR_8->registers + VAR_3);

 VAR_8->dir_busy &= ~VAR_0;
}
