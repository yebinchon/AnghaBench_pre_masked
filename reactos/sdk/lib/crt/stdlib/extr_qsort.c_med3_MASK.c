
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static __inline char *
FUNC_1(char *VAR_0, char *VAR_1, char *VAR_2, int (__cdecl *VAR_3)(const void*, const void*))
{
 return FUNC_0(VAR_0, VAR_1) < 0 ?
        (FUNC_0(VAR_1, VAR_2) < 0 ? VAR_1 : (FUNC_0(VAR_0, VAR_2) < 0 ? VAR_2 : VAR_0 ))
              :(FUNC_0(VAR_1, VAR_2) > 0 ? VAR_1 : (FUNC_0(VAR_0, VAR_2) < 0 ? VAR_0 : VAR_2 ));
}
