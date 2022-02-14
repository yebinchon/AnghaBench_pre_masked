
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
            unsigned VAR_5)
{
    const unsigned char *VAR_6 = VAR_0;
    const unsigned char *VAR_7 = VAR_0 + VAR_1;
    unsigned VAR_8 = *VAR_4;

    for ( ; VAR_0<VAR_7; VAR_0++) {
        unsigned char VAR_9;
        VAR_9 = VAR_2[*VAR_0];
        VAR_8 = *(VAR_3 + (VAR_8<<7) + VAR_9);
        if (VAR_8 >= VAR_5)
            break;
    }

    *VAR_4 = VAR_8;
    return VAR_0 - VAR_6;
}
