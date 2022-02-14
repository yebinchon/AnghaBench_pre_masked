
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct gsw_mt753x*,int ) ;
 int FUNC_2 (struct gsw_mt753x*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct gsw_mt753x *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_1, FUNC_0(VAR_2));
 VAR_4 &= ~(0xf << (VAR_2 & 7) * VAR_0);
 VAR_4 |= VAR_3 << (VAR_2 & 7) * VAR_0;
 FUNC_2(VAR_1, FUNC_0(VAR_2), VAR_4);
}
