
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;


 long FUNC_0 (struct pt_regs*) ;
 int VAR_0 ;
 long long FUNC_1 () ;
 int FUNC_2 (int *,long*) ;
 long long* FUNC_3 (int *,...) ;
 int VAR_1 ;
 long long FUNC_4 (long long) ;
 int VAR_2 ;

int FUNC_5(struct pt_regs *VAR_3)
{
 long VAR_4 = FUNC_0(VAR_3);
 u64 *VAR_5, VAR_6, VAR_7;
 u32 VAR_8;

 VAR_5 = FUNC_3(&VAR_2, &VAR_4);
 if (!VAR_5)
  return 0;

 u64 VAR_9 = FUNC_1();
 u64 VAR_10 = VAR_9 - *VAR_5;

 FUNC_2(&VAR_2, &VAR_4);
 VAR_6 = FUNC_4(VAR_10);
 VAR_7 = 1ll << VAR_6;
 VAR_8 = (VAR_6 * 64 + (VAR_10 - VAR_7) * 64 / VAR_7) * 3 / 64;

 if (VAR_8 >= VAR_0)
  VAR_8 = VAR_0 - 1;

 VAR_5 = FUNC_3(&VAR_1, &VAR_8);
 if (VAR_5)
  *VAR_5 += 1;

 return 0;
}
