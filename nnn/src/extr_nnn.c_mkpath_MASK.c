
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 size_t FUNC_1 (char*,char const*,scalar_t__) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_1, const char *VAR_2, char *VAR_3)
{
 size_t VAR_4;


 if (VAR_2[0] == '/')
  return FUNC_1(VAR_3, VAR_2, VAR_0);


 if (FUNC_0(VAR_1))
  VAR_4 = 1;
 else
  VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_0);

 VAR_3[VAR_4 - 1] = '/';
 return (FUNC_1(VAR_3 + VAR_4, VAR_2, VAR_0 - VAR_4) + VAR_4);
}
