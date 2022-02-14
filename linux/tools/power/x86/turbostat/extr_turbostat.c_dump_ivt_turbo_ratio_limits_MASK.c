
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

 FUNC_0(VAR_3, "cpu%d: MSR_TURBO_RATIO_LIMIT1: 0x%08x\n", VAR_1, VAR_4);

 VAR_5 = (VAR_4 >> 56) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 16 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 48) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 15 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 40) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 14 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 32) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 13 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 24) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 12 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 16) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 11 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 8) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 10 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);

 VAR_5 = (VAR_4 >> 0) & 0xFF;
 if (VAR_5)
  FUNC_0(VAR_3, "%d * %.1u = %.1u MHz max turbo 9 active cores\n",
   VAR_5, VAR_2, VAR_5 * VAR_2);
 return;
}
