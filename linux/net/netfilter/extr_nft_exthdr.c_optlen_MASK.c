
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ const VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const u8 *VAR_1, unsigned int VAR_2)
{

 if (VAR_1[VAR_2] <= VAR_0 || VAR_1[VAR_2 + 1] == 0)
  return 1;
 else
  return VAR_1[VAR_2 + 1];
}
