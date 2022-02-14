
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ceph_pg {scalar_t__ seed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int) ;

bool FUNC_3(const struct ceph_pg *VAR_0, u32 VAR_1,
        u32 VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = (1 << VAR_3) - 1;
 int VAR_5;

 FUNC_0(VAR_0->seed >= VAR_1);
 if (VAR_2 <= VAR_1)
  return 0;

 for (VAR_5 = 1; ; VAR_5++) {
  int VAR_6 = VAR_5 << (VAR_3 - 1);
  u32 VAR_7 = VAR_6 | VAR_0->seed;

  if (VAR_7 < VAR_1 || VAR_7 == VAR_0->seed)
   continue;
  if (VAR_7 >= VAR_2)
   break;

  VAR_7 = FUNC_2(VAR_7, VAR_1, VAR_4);
  if (VAR_7 == VAR_0->seed)
   return 1;
 }

 return 0;
}
