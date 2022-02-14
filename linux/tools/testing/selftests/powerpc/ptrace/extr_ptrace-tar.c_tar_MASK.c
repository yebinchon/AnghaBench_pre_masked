
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,char*,unsigned long,unsigned long,unsigned long) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int*) ;
 char* VAR_11 ;
 char* VAR_12 ;
 int FUNC_6 (unsigned long*,int ,int ,int ) ;

void FUNC_7(void)
{
 unsigned long VAR_13[3];
 int VAR_14;

 VAR_9 = (int *)FUNC_4(VAR_10, ((void*)0), 0);
 FUNC_3("%-30s TAR: %u PPR: %lx DSCR: %u\n",
   VAR_12, VAR_7, VAR_2, VAR_0);

 FUNC_2(VAR_6, VAR_7);
 FUNC_2(VAR_5, VAR_2);
 FUNC_2(VAR_4, VAR_0);

 VAR_9[2] = 1;


 while (!VAR_9[0])
  asm volatile("" : : : "memory");

 VAR_13[0] = FUNC_1(VAR_6);
 VAR_13[1] = FUNC_1(VAR_5);
 VAR_13[2] = FUNC_1(VAR_4);

 FUNC_3("%-30s TAR: %lu PPR: %lx DSCR: %lu\n",
   VAR_11, VAR_13[0], VAR_13[1], VAR_13[2]);


 VAR_9[1] = 1;
 FUNC_5((int *)VAR_9);

 VAR_14 = FUNC_6(VAR_13, VAR_8, VAR_3, VAR_1);
 if (VAR_14)
  FUNC_0(1);
 FUNC_0(0);
}
