
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 unsigned int FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static inline unsigned FUNC_1(const WCHAR *VAR_0)
{
    unsigned VAR_1 = 0;
    for(; *VAR_0; VAR_0++)
        VAR_1 = (VAR_1>>(sizeof(unsigned)*8-4)) ^ (VAR_1<<4) ^ FUNC_0(*VAR_0);
    return VAR_1;
}
