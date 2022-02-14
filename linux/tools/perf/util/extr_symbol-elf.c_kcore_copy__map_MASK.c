
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kcore_copy_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct kcore_copy_info*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct kcore_copy_info *VAR_0, u64 VAR_1, u64 VAR_2,
      u64 VAR_3, u64 VAR_4, u64 VAR_5)
{
 u64 VAR_6, VAR_7;

 if (VAR_4 < VAR_1 || VAR_4 >= VAR_2)
  return 0;

 VAR_7 = (VAR_4 - VAR_1) + VAR_3;
 VAR_6 = VAR_5 < VAR_2 ? VAR_5 - VAR_4 : VAR_2 - VAR_4;

 return FUNC_0(VAR_0, VAR_4, VAR_6, VAR_7) ? 0 : -1;
}
