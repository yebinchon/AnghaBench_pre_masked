
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_3( unsigned char *VAR_0, const int VAR_1 )
{
    int VAR_2;
    unsigned char VAR_3 = VAR_0[6];

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        int VAR_4;

        for (VAR_4 = 6; VAR_4 >= 0; VAR_4--)
        {
            if (VAR_4!=6 && (VAR_0[VAR_4] & 0x01))
                VAR_0[VAR_4+1] |= 0x80;
            VAR_0[VAR_4] >>= 1;
        }

        if (FUNC_1( VAR_0, 28 ))
        {
            FUNC_0( VAR_0, 28 );
            FUNC_2( VAR_0, 0 );
        }

        if (VAR_3 & 0x01)
            FUNC_2( VAR_0, 28 );

        VAR_3 >>= 1;
    }
}
