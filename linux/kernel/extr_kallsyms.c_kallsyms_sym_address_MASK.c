
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static unsigned long FUNC_1(int VAR_5)
{
 if (!FUNC_0(VAR_1))
  return VAR_2[VAR_5];


 if (!FUNC_0(VAR_0))
  return VAR_4 + (u32)VAR_3[VAR_5];


 if (VAR_3[VAR_5] >= 0)
  return VAR_3[VAR_5];


 return VAR_4 - 1 - VAR_3[VAR_5];
}
