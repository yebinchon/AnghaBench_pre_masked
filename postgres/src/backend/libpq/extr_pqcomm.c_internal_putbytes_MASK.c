
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_4, size_t VAR_5)
{
 size_t VAR_6;

 while (VAR_5 > 0)
 {

  if (VAR_3 >= VAR_2)
  {
   FUNC_2(0);
   if (FUNC_0())
    return VAR_0;
  }
  VAR_6 = VAR_2 - VAR_3;
  if (VAR_6 > VAR_5)
   VAR_6 = VAR_5;
  FUNC_1(VAR_1 + VAR_3, VAR_4, VAR_6);
  VAR_3 += VAR_6;
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;
 }
 return 0;
}
