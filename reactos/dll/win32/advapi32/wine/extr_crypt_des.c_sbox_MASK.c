
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,int) ;
 int** VAR_0 ;

__attribute__((used)) static void FUNC_1( unsigned char *VAR_1, const unsigned char *VAR_2 )
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
        VAR_1[VAR_3] = 0;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    {
        int VAR_4, VAR_5, VAR_6;

        for (VAR_5 = VAR_4 = 0, VAR_6 = (VAR_3 * 6); VAR_4 < 6; VAR_4++, VAR_6++)
        {
            VAR_5 <<= 1;
            VAR_5 |= FUNC_0( VAR_2, VAR_6 );
        }

        if (0 == (VAR_3%2))
            VAR_1[VAR_3/2] |= ((VAR_0[VAR_3][VAR_5]) << 4);
        else
            VAR_1[VAR_3/2] |= VAR_0[VAR_3][VAR_5];
    }
}
