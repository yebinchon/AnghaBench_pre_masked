
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * p; int s; } ;
typedef TYPE_1__ bf_key ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(uint32_t *VAR_1, bf_key *VAR_2)
{
    uint32_t VAR_3;
    uint32_t VAR_4;
    uint32_t VAR_5;
    int VAR_6;

    VAR_3 = VAR_1[0];
    VAR_4 = VAR_1[1];

    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
        VAR_3 ^= VAR_2->p[VAR_6];
        VAR_4 ^= FUNC_0(VAR_3,VAR_2->s);

        VAR_5 = VAR_3;
        VAR_3 = VAR_4;
        VAR_4 = VAR_5;
    }

    VAR_3 ^= VAR_2->p[VAR_0];
    VAR_4 ^= VAR_2->p[VAR_0 + 1];

    VAR_1[0] = VAR_4;
    VAR_1[1] = VAR_3;
}
