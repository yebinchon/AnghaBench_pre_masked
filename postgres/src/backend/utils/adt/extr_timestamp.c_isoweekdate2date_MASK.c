
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int*,int*,int*) ;

void
FUNC_2(int VAR_0, int VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(*VAR_2, VAR_0);

 if (VAR_1 > 1)
  VAR_5 += VAR_1 - 2;
 else
  VAR_5 += 6;
 FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
}
