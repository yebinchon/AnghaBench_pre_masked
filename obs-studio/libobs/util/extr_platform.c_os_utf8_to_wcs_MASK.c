
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 size_t FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*,size_t,scalar_t__*,size_t,int ) ;

size_t FUNC_2(const char *VAR_0, size_t VAR_1, wchar_t *VAR_2,
        size_t VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;

 if (!VAR_0)
  return 0;

 VAR_4 = VAR_1 ? VAR_1 : FUNC_0(VAR_0);
 VAR_5 = VAR_2 ? (VAR_3 - 1) : FUNC_1(VAR_0, VAR_4, ((void*)0), 0, 0);

 if (VAR_2) {
  if (!VAR_3)
   return 0;

  if (VAR_5)
   VAR_5 =
    FUNC_1(VAR_0, VAR_4, VAR_2, VAR_5 + 1, 0);

  VAR_2[VAR_5] = 0;
 }

 return VAR_5;
}
