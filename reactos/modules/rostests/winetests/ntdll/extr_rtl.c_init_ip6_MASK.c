
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* s6_words; } ;
typedef TYPE_1__ IN6_ADDR ;



__attribute__((used)) static void FUNC_0(IN6_ADDR* VAR_0, const int VAR_1[8])
{
    unsigned int VAR_2;
    if (!VAR_1 || VAR_1[0] == -1)
    {
        for (VAR_2 = 0; VAR_2 < 8; ++VAR_2)
            VAR_0->s6_words[VAR_2] = 0xabab;
    }
    else
    {
        for (VAR_2 = 0; VAR_2 < 8; ++VAR_2)
            VAR_0->s6_words[VAR_2] = VAR_1[VAR_2];
    }
}
