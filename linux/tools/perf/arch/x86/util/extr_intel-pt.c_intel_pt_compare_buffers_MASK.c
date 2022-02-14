
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void*,size_t) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, size_t VAR_1,
         void *VAR_2, size_t VAR_3, size_t VAR_4)
{
 size_t VAR_5 = VAR_3 + VAR_1, VAR_6;

 if (VAR_5 <= VAR_4)
  return FUNC_0(VAR_0, VAR_2 + VAR_3, VAR_1);

 VAR_6 = VAR_5 - VAR_4;
 if (FUNC_0(VAR_0, VAR_2 + VAR_3, VAR_6))
  return 1;

 VAR_1 -= VAR_6;

 return FUNC_0(VAR_0 + VAR_6, VAR_2, VAR_1);
}
