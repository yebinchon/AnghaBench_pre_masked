
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;



__attribute__((used)) static inline BYTE FUNC_0( BYTE VAR_0 )
{
    if( VAR_0 <= 9 )
        return VAR_0 + '0';
    return VAR_0 + 'A' - 10;
}
