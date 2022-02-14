
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct reciprocal_value {int m; int sh2; int sh1; } ;


 int FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;

struct reciprocal_value FUNC_4(u32 VAR_0)
{
 struct reciprocal_value VAR_1;
 u64 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0 - 1);
 VAR_2 = ((1ULL << 32) * ((1ULL << VAR_3) - VAR_0));
 FUNC_0(VAR_2, VAR_0);
 ++VAR_2;
 VAR_1.m = (u32)VAR_2;
 VAR_1.sh1 = FUNC_3(VAR_3, 1);
 VAR_1.sh2 = FUNC_2(VAR_3 - 1, 0);

 return VAR_1;
}
