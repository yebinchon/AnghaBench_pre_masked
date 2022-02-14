
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;
typedef scalar_t__ ktime_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(ktime_t VAR_1)
{
 s64 VAR_2 = FUNC_1(FUNC_0() - VAR_1);
 return FUNC_2(VAR_2 >= 0) ?
  VAR_0 - FUNC_3(VAR_2) :
  VAR_0 + FUNC_3(-VAR_2);
}
