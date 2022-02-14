
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt64 ;
typedef size_t UInt32 ;



__attribute__((used)) static UInt64 FUNC_0(const UInt64 *VAR_0, UInt32 VAR_1)
{
  UInt64 VAR_2 = 0;
  UInt32 VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    VAR_2 += VAR_0[VAR_3];
  return VAR_2;
}
