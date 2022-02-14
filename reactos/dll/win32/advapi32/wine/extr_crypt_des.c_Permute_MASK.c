
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const) ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_2( unsigned char *VAR_0, const unsigned char *VAR_1, const unsigned char *VAR_2, const int VAR_3 )
{
    int VAR_4, VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        VAR_0[VAR_5] = 0;

    VAR_4 = VAR_3 * 8;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        if (FUNC_0( VAR_1, VAR_2[VAR_5] ))
            FUNC_1( VAR_0, VAR_5 );
    }
}
