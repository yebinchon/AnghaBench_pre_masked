
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int*,int) ;

void FUNC_1( unsigned int VAR_1 )
{
    if (VAR_0)
        VAR_1 = ((VAR_1 << 24) | ((VAR_1 << 8) & 0x00ff0000) | ((VAR_1 >> 8) & 0x0000ff00) | (VAR_1 >> 24));
    FUNC_0( &VAR_1, sizeof(VAR_1) );
}
