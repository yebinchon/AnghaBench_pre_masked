
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int u32 ;
struct ag71xx {unsigned int mac_base; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct ag71xx *VAR_0, unsigned VAR_1, u32 VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = VAR_0->mac_base + VAR_1;
 FUNC_1(FUNC_0(VAR_3) & ~VAR_2, VAR_3);

 (void) FUNC_0(VAR_3);
}
