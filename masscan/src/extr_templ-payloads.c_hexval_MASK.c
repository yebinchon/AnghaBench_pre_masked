
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned
FUNC_0(unsigned VAR_0)
{
    if ('0' <= VAR_0 && VAR_0 <= '9')
        return VAR_0 - '0';
    if ('a' <= VAR_0 && VAR_0 <= 'f')
        return VAR_0 - 'a' + 10;
    if ('A' <= VAR_0 && VAR_0 <= 'F')
        return VAR_0 - 'A' + 10;
    return 0;
}
