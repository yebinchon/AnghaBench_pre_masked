
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0, char *VAR_1, char *VAR_2, int (*VAR_3) (const void *, const void *))
{
 return VAR_3(VAR_0, VAR_1) < 0 ?
  (VAR_3(VAR_1, VAR_2) < 0 ? VAR_1 : (VAR_3(VAR_0, VAR_2) < 0 ? VAR_2 : VAR_0))
  : (VAR_3(VAR_1, VAR_2) > 0 ? VAR_1 : (VAR_3(VAR_0, VAR_2) < 0 ? VAR_0 : VAR_2));
}
