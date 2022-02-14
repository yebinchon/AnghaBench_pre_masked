
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int VAR_1 ;
 int VAR_2 ;

void FUNC_4(unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_3 >= VAR_1 || (VAR_3 + VAR_4) > VAR_1)
  return;

 FUNC_2(&VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(VAR_3 + VAR_5);

 FUNC_0(VAR_0, VAR_3, VAR_4);
 FUNC_3(&VAR_2);
}
