
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char) ;

__attribute__((used)) static inline void FUNC_3( const char *VAR_0 )
{
    if (VAR_0[0] != '#')
    {
        while (*VAR_0)
        {
            unsigned char VAR_1 = *VAR_0++;
            FUNC_1( FUNC_2(VAR_1) );
        }
        FUNC_1( 0 );
    }
    else
    {
        FUNC_1( 0xffff );
        FUNC_1( FUNC_0( VAR_0 + 1 ));
    }
}
