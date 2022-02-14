
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char BYTE ;


 int FUNC_0 (char*) ;

__attribute__((used)) static const BYTE*
FUNC_1(void *VAR_0, const BYTE *VAR_1)
{
    if (VAR_1[0] == '/')
    {
        int VAR_2 = FUNC_0((char*)VAR_1+1);
        return ((BYTE *)VAR_0) + VAR_2;
    }
    else
        return VAR_1;
}
