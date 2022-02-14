
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbcs_table {unsigned char* cp2uni_leadbytes; } ;



__attribute__((used)) static inline int FUNC_0( const struct dbcs_table *VAR_0,
                                   const unsigned char *VAR_1, unsigned int VAR_2 )
{
    const unsigned char * const VAR_3 = VAR_0->cp2uni_leadbytes;
    int VAR_4;

    for (VAR_4 = 0; VAR_2; VAR_2--, VAR_1++, VAR_4++)
    {
        if (VAR_3[*VAR_1] && VAR_2 > 1 && VAR_1[1])
        {
            VAR_1++;
            VAR_2--;
        }
    }
    return VAR_4;
}
