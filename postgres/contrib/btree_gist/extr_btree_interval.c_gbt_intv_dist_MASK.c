
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;
typedef int Interval ;
typedef int FmgrInfo ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static float8
FUNC_2(const void *VAR_0, const void *VAR_1, FmgrInfo *VAR_2)
{
 return (float8) FUNC_0(FUNC_1((const Interval *) VAR_0) - FUNC_1((const Interval *) VAR_1));
}
