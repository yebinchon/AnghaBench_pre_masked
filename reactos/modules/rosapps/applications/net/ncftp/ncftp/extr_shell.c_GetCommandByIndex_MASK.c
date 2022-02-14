
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * CommandPtr ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

CommandPtr
FUNC_0(const int VAR_3)
{
 if ((VAR_3 < 0) || (VAR_3 >= (int) VAR_1))
  return (VAR_2);
 return (&VAR_0[VAR_3]);
}
