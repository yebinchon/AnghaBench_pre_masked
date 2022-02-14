
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct oxygen {int dummy; } ;


 int FUNC_0 (struct oxygen*,unsigned int,unsigned int) ;
 int FUNC_1 (struct oxygen*,unsigned int,unsigned int,int) ;

void FUNC_2(struct oxygen *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2, u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_5 &= ~VAR_4;
 VAR_5 |= VAR_3 & VAR_4;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
}
