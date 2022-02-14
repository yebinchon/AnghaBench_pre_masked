
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ag71xx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,unsigned int) ;

__attribute__((used)) static void inline FUNC_2(struct ag71xx *VAR_2,
          unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 VAR_4 &= ~(VAR_0 << VAR_1);
 VAR_4 |= (VAR_3 & VAR_0) << VAR_1;
 FUNC_1(VAR_2, VAR_4);
}
