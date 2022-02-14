
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ s64 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static inline u64 FUNC_2(const u64 VAR_0, const u64 VAR_1, const u64 VAR_2)
{
 s64 VAR_3 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_3 < 0);
 VAR_3 -= VAR_2 + 1;

 return VAR_3 > 0 ? VAR_3 : 0;
}
