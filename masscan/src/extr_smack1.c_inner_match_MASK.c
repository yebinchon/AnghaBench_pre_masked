
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int transition_t ;



__attribute__((used)) static size_t
FUNC_0( const unsigned char *VAR_0,
                size_t VAR_1,
                const unsigned char *VAR_2,
                const transition_t *VAR_3,
                unsigned *VAR_4,
                unsigned VAR_5,
                unsigned VAR_6)
{
    const unsigned char *VAR_7 = VAR_0;
    const unsigned char *VAR_8 = VAR_0 + VAR_1;
    unsigned VAR_9 = *VAR_4;

    for ( ; VAR_0<VAR_8; VAR_0++) {
        unsigned char VAR_10;






        VAR_10 = VAR_2[*VAR_0];
        VAR_9 = *(VAR_3 + (VAR_9<<VAR_6) + VAR_10);

        if (VAR_9 >= VAR_5)
            break;

    }

    *VAR_4 = VAR_9;
    return VAR_0 - VAR_7;
}
