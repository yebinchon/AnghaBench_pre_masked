
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 unsigned long long VAR_4;
 unsigned int VAR_5;

 FUNC_1(VAR_1, VAR_0, &VAR_4);

 FUNC_0(VAR_3, "cpu%d: MSR_TURBO_RATIO_LIMIT2: 0x%08x\n", VAR_1, VAR_4);

 VAR_5 = (VAR_4 >> 8) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 18 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 0) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 17 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);
 return;
}
