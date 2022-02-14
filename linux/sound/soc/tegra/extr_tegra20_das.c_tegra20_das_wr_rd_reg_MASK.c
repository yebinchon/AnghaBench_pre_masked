
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_4, unsigned int VAR_5)
{
 if ((VAR_5 >= VAR_3) &&
     (VAR_5 <= FUNC_0(VAR_1)))
  return 1;
 if ((VAR_5 >= VAR_2) &&
     (VAR_5 <= FUNC_0(VAR_0)))
  return 1;

 return 0;
}
