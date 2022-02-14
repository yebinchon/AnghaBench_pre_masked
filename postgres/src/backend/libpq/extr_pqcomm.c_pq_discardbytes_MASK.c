
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(size_t VAR_4)
{
 size_t VAR_5;

 FUNC_0(VAR_1);

 while (VAR_4 > 0)
 {
  while (VAR_3 >= VAR_2)
  {
   if (FUNC_1())
    return VAR_0;
  }
  VAR_5 = VAR_2 - VAR_3;
  if (VAR_5 > VAR_4)
   VAR_5 = VAR_4;
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 }
 return 0;
}
