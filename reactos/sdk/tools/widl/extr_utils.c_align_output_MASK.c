
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,int ,size_t) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_2( unsigned int VAR_2 )
{
    size_t VAR_3 = VAR_2 - (VAR_1 % VAR_2);

    if (VAR_3 == VAR_2) return;
    FUNC_0( VAR_3 );
    FUNC_1( VAR_0 + VAR_1, 0, VAR_3 );
    VAR_1 += VAR_3;
}
