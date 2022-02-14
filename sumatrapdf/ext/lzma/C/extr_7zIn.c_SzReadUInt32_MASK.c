
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int SRes ;
typedef int CSzData ;
typedef scalar_t__ Byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static SRes FUNC_2(CSzData *VAR_1, UInt32 *VAR_2)
{
  int VAR_3;
  *VAR_2 = 0;
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  {
    Byte VAR_4;
    FUNC_0(FUNC_1(VAR_1, &VAR_4));
    *VAR_2 |= ((UInt32)(VAR_4) << (8 * VAR_3));
  }
  return VAR_0;
}
