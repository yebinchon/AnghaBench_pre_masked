
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;
typedef scalar_t__ int32 ;
typedef int NumericVar ;


 int FUNC_0 (int const*,scalar_t__*) ;

__attribute__((used)) static bool
FUNC_1(const NumericVar *VAR_0, int32 *VAR_1)
{
 int64 VAR_2;

 if (!FUNC_0(VAR_0, &VAR_2))
  return 0;


 *VAR_1 = (int32) VAR_2;


 return ((int64) *VAR_1 == VAR_2);
}
