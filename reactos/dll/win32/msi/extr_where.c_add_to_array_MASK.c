
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JOINTABLE ;



__attribute__((used)) static void FUNC_0( JOINTABLE **VAR_0, JOINTABLE *VAR_1 )
{
    while (*VAR_0 && *VAR_0 != VAR_1)
        VAR_0++;
    if (!*VAR_0)
        *VAR_0 = VAR_1;
}
