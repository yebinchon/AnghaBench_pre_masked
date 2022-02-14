
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;



__attribute__((used)) static int16 FUNC_0( double VAR_0 )
{
    if( VAR_0 > 32767 )
        return 32767;
    if( VAR_0 < -32768 || VAR_0 != VAR_0 )
        return -32768;
    return (int16)VAR_0;
}
