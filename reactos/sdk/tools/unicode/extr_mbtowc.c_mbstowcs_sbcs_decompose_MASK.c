
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbcs_table {int * cp2uni; int * cp2uni_glyphs; } ;
typedef int WCHAR ;


 int VAR_0 ;
 unsigned int FUNC_0 (int const,int *,unsigned int) ;

__attribute__((used)) static int FUNC_1( const struct sbcs_table *VAR_1, int VAR_2,
                                    const unsigned char *VAR_3, unsigned int VAR_4,
                                    WCHAR *VAR_5, unsigned int VAR_6 )
{
    const WCHAR * const VAR_7 = (VAR_2 & VAR_0) ? VAR_1->cp2uni_glyphs : VAR_1->cp2uni;
    unsigned int VAR_8;

    if (!VAR_6)
    {
        WCHAR VAR_9[4];
        for (VAR_8 = 0; VAR_4; VAR_4--, VAR_3++)
            VAR_8 += FUNC_0( VAR_7[*VAR_3], VAR_9, 4 );
        return VAR_8;
    }

    for (VAR_8 = VAR_6; VAR_4 && VAR_8; VAR_4--, VAR_3++)
    {
        unsigned int VAR_10 = FUNC_0( VAR_7[*VAR_3], VAR_5, VAR_8 );
        if (!VAR_10) break;
        VAR_8 -= VAR_10;
        VAR_5 += VAR_10;
    }
    if (VAR_4) return -1;
    return VAR_6 - VAR_8;
}
