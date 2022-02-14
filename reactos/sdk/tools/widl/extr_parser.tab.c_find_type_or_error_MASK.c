
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;


 int FUNC_0 (char*,char const*) ;
 int * FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static type_t *FUNC_2(const char *VAR_0, int VAR_1)
{
  type_t *VAR_2 = FUNC_1(VAR_0, ((void*)0), VAR_1);
  if (!VAR_2) {
    FUNC_0("type '%s' not found\n", VAR_0);
    return ((void*)0);
  }
  return VAR_2;
}
