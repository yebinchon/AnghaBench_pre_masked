
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clocksource {scalar_t__ mult; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u32 FUNC_1(struct clocksource *VAR_0)
{
 u64 VAR_1;



 VAR_1 = (u64)VAR_0->mult * 11;
 FUNC_0(VAR_1,100);
 return (u32)VAR_1;
}
