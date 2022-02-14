
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ULONG ;



__attribute__((used)) static inline void FUNC_0( ULONG *VAR_0, unsigned int VAR_1 )
{
    *VAR_0 = (*VAR_0 + VAR_1 - 1) & ~(VAR_1 - 1);
}
