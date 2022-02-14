
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;


 scalar_t__ const VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const u_int8_t *VAR_1, unsigned int VAR_2)
{

 if (VAR_1[VAR_2] <= VAR_0 || VAR_1[VAR_2+1] == 0)
  return 1;
 else
  return VAR_1[VAR_2+1];
}
