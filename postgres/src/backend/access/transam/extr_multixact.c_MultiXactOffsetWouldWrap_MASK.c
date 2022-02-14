
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef scalar_t__ MultiXactOffset ;



__attribute__((used)) static bool
FUNC_0(MultiXactOffset VAR_0, MultiXactOffset VAR_1,
       uint32 VAR_2)
{
 MultiXactOffset VAR_3;





 VAR_3 = VAR_1 + VAR_2;
 if (VAR_3 < VAR_1)
  VAR_3++;
 if (VAR_1 < VAR_0)
  return VAR_3 >= VAR_0 || VAR_3 < VAR_1;
 else
  return VAR_3 >= VAR_0 && VAR_3 < VAR_1;
}
