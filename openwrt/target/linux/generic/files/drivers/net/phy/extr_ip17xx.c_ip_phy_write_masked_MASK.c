
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip17xx_state {int dummy; } ;


 int FUNC_0 (struct ip17xx_state*,int,int) ;
 int FUNC_1 (struct ip17xx_state*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ip17xx_state *VAR_0, int VAR_1, int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5 < 0)
  return 0;
 return FUNC_1(VAR_0, VAR_1, VAR_2, (VAR_5 & ~VAR_3) | VAR_4);
}
