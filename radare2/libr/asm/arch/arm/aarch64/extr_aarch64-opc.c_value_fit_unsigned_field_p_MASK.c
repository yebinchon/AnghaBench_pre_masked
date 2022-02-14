
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef unsigned int int64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1 (int64_t VAR_0, unsigned VAR_1)
{
  FUNC_0 (VAR_1 < 32);
  if (VAR_1 < sizeof (VAR_0) * 8)
    {
      int64_t VAR_2 = (int64_t)1 << VAR_1;
      if (VAR_0 >= 0 && VAR_0 < VAR_2)
 return 1;
    }
  return 0;
}
