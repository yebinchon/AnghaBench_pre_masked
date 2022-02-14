
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ag71xx {int mii_base; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct ag71xx *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->mii_base);
 VAR_3 &= ~(VAR_0);
 VAR_3 |= (VAR_2 & VAR_0);
 FUNC_1(VAR_3, VAR_1->mii_base);
}
