
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned long,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_1, unsigned int VAR_2, u32 VAR_3)
{
 u64 VAR_4 = (u64)VAR_2 * VAR_1;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_4 >> VAR_3;
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_0(VAR_5) + 1;
 VAR_6 -= !(VAR_4 - (1ULL << (VAR_6 + VAR_3 - 1)));

 if (VAR_6 < 0)
  VAR_6 = 0;
out:
 FUNC_1("qfq calc_index: W = %lu, L = %u, I = %d\n",
   (unsigned long) VAR_0/VAR_1, VAR_2, VAR_6);

 return VAR_6;
}
