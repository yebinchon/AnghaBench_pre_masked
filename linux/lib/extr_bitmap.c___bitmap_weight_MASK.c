
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long const FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long const) ;

int FUNC_2(const unsigned long *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4 = VAR_2/VAR_0;
 int VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  VAR_5 += FUNC_1(VAR_1[VAR_3]);

 if (VAR_2 % VAR_0)
  VAR_5 += FUNC_1(VAR_1[VAR_3] & FUNC_0(VAR_2));

 return VAR_5;
}
