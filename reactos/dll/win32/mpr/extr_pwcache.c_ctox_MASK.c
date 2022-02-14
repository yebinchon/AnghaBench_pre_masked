
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;



__attribute__((used)) static inline signed char FUNC_0( CHAR VAR_0 )
{
    if( ( VAR_0 >= '0' ) && ( VAR_0 <= '9' ) )
        return VAR_0 - '0';
    if( ( VAR_0 >= 'A' ) && ( VAR_0 <= 'F' ) )
        return VAR_0 - 'A' + 10;
    if( ( VAR_0 >= 'a' ) && ( VAR_0 <= 'a' ) )
        return VAR_0 - 'a' + 10;
    return -1;
}
