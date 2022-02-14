
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef scalar_t__ UInt32 ;
typedef int SRes ;
typedef int CSzData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static SRes FUNC_2(CSzData *VAR_2, UInt32 *VAR_3)
{
  UInt64 VAR_4;
  FUNC_0(FUNC_1(VAR_2, &VAR_4));
  if (VAR_4 >= 0x80000000)
    return VAR_0;
  if (VAR_4 >= ((UInt64)(1) << ((sizeof(size_t) - 1) * 8 + 2)))
    return VAR_0;
  *VAR_3 = (UInt32)VAR_4;
  return VAR_1;
}
