
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*) ;

__attribute__((used)) static inline int FUNC_3(json_t *VAR_0, const char *VAR_1)
{
 json_t *VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2 || !FUNC_1(VAR_2))
  return 0;

 return (int)FUNC_0(VAR_2);
}
