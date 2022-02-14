
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ag71xx_mdio {unsigned int mdio_base; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline u32 FUNC_1(struct ag71xx_mdio *VAR_0, unsigned VAR_1)
{
 return FUNC_0(VAR_0->mdio_base + VAR_1);
}
