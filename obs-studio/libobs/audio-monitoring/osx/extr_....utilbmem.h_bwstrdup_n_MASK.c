
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 scalar_t__ FUNC_0 (scalar_t__ const*,size_t) ;

__attribute__((used)) static inline wchar_t *FUNC_1(const wchar_t *VAR_0, size_t VAR_1)
{
 wchar_t *VAR_2;
 if (!VAR_0)
  return ((void*)0);

 VAR_2 = (wchar_t *)FUNC_0(VAR_0, (VAR_1 + 1) * sizeof(wchar_t));
 VAR_2[VAR_1] = 0;

 return VAR_2;
}
