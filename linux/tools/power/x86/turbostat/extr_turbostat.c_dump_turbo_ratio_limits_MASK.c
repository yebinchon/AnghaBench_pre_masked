
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(int VAR_5, int VAR_6)
{
 unsigned long long VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;

 FUNC_1(VAR_2, VAR_0, &VAR_7);
 FUNC_0(VAR_4, "cpu%d: MSR_TURBO_RATIO_LIMIT: 0x%08x\n", VAR_2, VAR_7);

 if (FUNC_2(VAR_5, VAR_6)) {
  FUNC_1(VAR_2, VAR_1, &VAR_8);
  FUNC_0(VAR_4, "cpu%d: MSR_TURBO_RATIO_LIMIT1: 0x%08x\n", VAR_2, VAR_8);
 } else {
  VAR_8 = 0x0807060504030201;
 }

 VAR_9 = (VAR_7 >> 56) & 0xFF;
 VAR_10 = (VAR_8 >> 56) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);

 VAR_9 = (VAR_7 >> 48) & 0xFF;
 VAR_10 = (VAR_8 >> 48) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);

 VAR_9 = (VAR_7 >> 40) & 0xFF;
 VAR_10 = (VAR_8 >> 40) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);

 VAR_9 = (VAR_7 >> 32) & 0xFF;
 VAR_10 = (VAR_8 >> 32) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);

 VAR_9 = (VAR_7 >> 24) & 0xFF;
 VAR_10 = (VAR_8 >> 24) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);

 VAR_9 = (VAR_7 >> 16) & 0xFF;
 VAR_10 = (VAR_8 >> 16) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);

 VAR_9 = (VAR_7 >> 8) & 0xFF;
 VAR_10 = (VAR_8 >> 8) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);

 VAR_9 = (VAR_7 >> 0) & 0xFF;
 VAR_10 = (VAR_8 >> 0) & 0xFF;
 if (VAR_9)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo %d active cores\n",
   VAR_9, VAR_3, VAR_9 * VAR_3, VAR_10);
 return;
}
