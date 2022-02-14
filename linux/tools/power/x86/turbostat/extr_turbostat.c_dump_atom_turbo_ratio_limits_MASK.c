
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
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{
 unsigned long long VAR_5;
 unsigned int VAR_6;

 FUNC_1(VAR_2, VAR_0, &VAR_5);
 FUNC_0(VAR_4, "cpu%d: MSR_ATOM_CORE_RATIOS: 0x%08x\n", VAR_2, VAR_5 & 0xFFFFFFFF);

 VAR_6 = (VAR_5 >> 0) & 0x3F;
 if (VAR_6)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz minimum operating frequency\n",
   VAR_6, VAR_3, VAR_6 * VAR_3);

 VAR_6 = (VAR_5 >> 8) & 0x3F;
 if (VAR_6)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz low frequency mode (LFM)\n",
   VAR_6, VAR_3, VAR_6 * VAR_3);

 VAR_6 = (VAR_5 >> 16) & 0x3F;
 if (VAR_6)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz base frequency\n",
   VAR_6, VAR_3, VAR_6 * VAR_3);

 FUNC_1(VAR_2, VAR_1, &VAR_5);
 FUNC_0(VAR_4, "cpu%d: MSR_ATOM_CORE_TURBO_RATIOS: 0x%08x\n", VAR_2, VAR_5 & 0xFFFFFFFF);

 VAR_6 = (VAR_5 >> 24) & 0x3F;
 if (VAR_6)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo 4 active cores\n",
   VAR_6, VAR_3, VAR_6 * VAR_3);

 VAR_6 = (VAR_5 >> 16) & 0x3F;
 if (VAR_6)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo 3 active cores\n",
   VAR_6, VAR_3, VAR_6 * VAR_3);

 VAR_6 = (VAR_5 >> 8) & 0x3F;
 if (VAR_6)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo 2 active cores\n",
   VAR_6, VAR_3, VAR_6 * VAR_3);

 VAR_6 = (VAR_5 >> 0) & 0x3F;
 if (VAR_6)
  FUNC_0(VAR_4, "%d * %.1u = %.1u MHz max turbo 1 active core\n",
   VAR_6, VAR_3, VAR_6 * VAR_3);
}
