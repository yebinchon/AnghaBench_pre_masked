
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
 const unsigned int VAR_4 = 7;

 unsigned long long VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 unsigned int VAR_10[VAR_4];
 unsigned int VAR_11[VAR_4];

 FUNC_1(VAR_1, VAR_0, &VAR_5);

 FUNC_0(VAR_3, "cpu%d: MSR_TURBO_RATIO_LIMIT: 0x%08x\n",
  VAR_1, VAR_5);
 VAR_9 = 0;
 VAR_10[VAR_9] = (VAR_5 & 0xFF) >> 1;
 VAR_11[VAR_9] = (VAR_5 >> 8) & 0xFF;

 for (VAR_8 = 16; VAR_8 < 64; VAR_8 += 8) {
  VAR_6 = (VAR_5 >> VAR_8) & 0x1F;
  VAR_7 = (VAR_5 >> (VAR_8 + 5)) & 0x7;

  VAR_10[VAR_9 + 1] = VAR_10[VAR_9] + VAR_6;
  VAR_11[VAR_9 + 1] = VAR_11[VAR_9] - VAR_7;
  VAR_9++;
 }

 for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--)
  if (VAR_8 > 0 ? VAR_11[VAR_8] != VAR_11[VAR_8 - 1] : 1)
   FUNC_0(VAR_3,
    "%d * %.1u = %.1u MHz max turbo %d active cores\n",
    VAR_11[VAR_8], VAR_2, VAR_11[VAR_8] * VAR_2, VAR_10[VAR_8]);
}
