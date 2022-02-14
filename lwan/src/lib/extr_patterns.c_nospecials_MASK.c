
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;

 do {
  if (FUNC_1(VAR_1 + VAR_3, VAR_0)) {

   return 0;
  }

  VAR_3 += FUNC_0(VAR_1 + VAR_3) + 1;
 } while (VAR_3 <= VAR_2);


 return (1);
}
