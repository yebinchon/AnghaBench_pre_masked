
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;



__attribute__((used)) static inline void FUNC_0( unsigned char **VAR_0, unsigned char *VAR_1, unsigned int VAR_2 )
{
    ULONG_PTR VAR_3 = VAR_2 - 1;
    *VAR_0 = VAR_1 + (((ULONG_PTR)(*VAR_0 - VAR_1) + VAR_3) & ~VAR_3);
}
