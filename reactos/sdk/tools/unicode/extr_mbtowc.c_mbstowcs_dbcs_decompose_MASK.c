
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbcs_table {unsigned char* cp2uni_leadbytes; int * cp2uni; } ;
typedef int WCHAR ;


 unsigned int FUNC_0 (int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_1( const struct dbcs_table *VAR_0,
                                    const unsigned char *VAR_1, unsigned int VAR_2,
                                    WCHAR *VAR_3, unsigned int VAR_4 )
{
    const WCHAR * const VAR_5 = VAR_0->cp2uni;
    const unsigned char * const VAR_6 = VAR_0->cp2uni_leadbytes;
    unsigned int VAR_7, VAR_8;
    WCHAR VAR_9;

    if (!VAR_4)
    {
        WCHAR VAR_10[4];
        for (VAR_7 = 0; VAR_2; VAR_2--, VAR_1++)
        {
            unsigned char VAR_11 = VAR_6[*VAR_1];
            if (VAR_11 && VAR_2 > 1 && VAR_1[1])
            {
                VAR_1++;
                VAR_2--;
                VAR_9 = VAR_5[(VAR_11 << 8) + *VAR_1];
            }
            else VAR_9 = VAR_5[*VAR_1];
            VAR_7 += FUNC_0( VAR_9, VAR_10, 4 );
        }
        return VAR_7;
    }

    for (VAR_7 = VAR_4; VAR_2 && VAR_7; VAR_2--, VAR_1++)
    {
        unsigned char VAR_12 = VAR_6[*VAR_1];
        if (VAR_12 && VAR_2 > 1 && VAR_1[1])
        {
            VAR_1++;
            VAR_2--;
            VAR_9 = VAR_5[(VAR_12 << 8) + *VAR_1];
        }
        else VAR_9 = VAR_5[*VAR_1];
        if (!(VAR_8 = FUNC_0( VAR_9, VAR_3, VAR_7 ))) break;
        VAR_3 += VAR_8;
        VAR_7 -= VAR_8;
    }
    if (VAR_2) return -1;
    return VAR_4 - VAR_7;
}
