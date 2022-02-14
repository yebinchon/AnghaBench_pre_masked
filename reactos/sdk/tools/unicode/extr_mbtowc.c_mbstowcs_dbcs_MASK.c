
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbcs_table {unsigned char* cp2uni_leadbytes; int * cp2uni; } ;
typedef int WCHAR ;


 int FUNC_0 (struct dbcs_table const*,unsigned char const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1( const struct dbcs_table *VAR_0,
                                 const unsigned char *VAR_1, unsigned int VAR_2,
                                 WCHAR *VAR_3, unsigned int VAR_4 )
{
    const WCHAR * const VAR_5 = VAR_0->cp2uni;
    const unsigned char * const VAR_6 = VAR_0->cp2uni_leadbytes;
    unsigned int VAR_7;

    if (!VAR_4) return FUNC_0( VAR_0, VAR_1, VAR_2 );

    for (VAR_7 = VAR_4; VAR_2 && VAR_7; VAR_7--, VAR_2--, VAR_1++, VAR_3++)
    {
        unsigned char VAR_8 = VAR_6[*VAR_1];
        if (VAR_8 && VAR_2 > 1 && VAR_1[1])
        {
            VAR_1++;
            VAR_2--;
            *VAR_3 = VAR_5[(VAR_8 << 8) + *VAR_1];
        }
        else *VAR_3 = VAR_5[*VAR_1];
    }
    if (VAR_2) return -1;
    return VAR_4 - VAR_7;
}
