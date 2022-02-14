
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int,char*,...) ;

void FUNC_2(void)
{
 unsigned long VAR_1[] = {1 << 10, 1 << 20, 0};
 unsigned long VAR_2[] = {1, 2, 7, 15, 63, 64, 65,
    128, 256, 512, 12345, 0};
 int VAR_3, VAR_4;

 FUNC_1(1, "starting benchmarks\n");
 FUNC_1(1, "RADIX_TREE_MAP_SHIFT = %d\n", VAR_0);

 for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++)
  for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
   FUNC_0(VAR_1[VAR_3], VAR_2[VAR_4]);
}
