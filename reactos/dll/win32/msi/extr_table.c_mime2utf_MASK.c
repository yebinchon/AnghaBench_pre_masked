
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
    if( VAR_0<10 )
        return VAR_0 + '0';
    if( VAR_0<(10+26))
        return VAR_0 - 10 + 'A';
    if( VAR_0<(10+26+26))
        return VAR_0 - 10 - 26 + 'a';
    if( VAR_0 == (10+26+26) )
        return '.';
    return '_';
}
