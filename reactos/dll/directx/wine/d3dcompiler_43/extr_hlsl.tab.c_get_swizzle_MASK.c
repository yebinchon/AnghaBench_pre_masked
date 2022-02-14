
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct hlsl_ir_swizzle {int dummy; } ;
struct hlsl_ir_node {TYPE_1__* data_type; } ;
struct TYPE_2__ {scalar_t__ type; unsigned int dimx; unsigned int dimy; } ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hlsl_ir_swizzle* FUNC_0 (unsigned int,unsigned int,struct hlsl_ir_node*,struct source_location*) ;
 unsigned int FUNC_1 (char const*) ;

__attribute__((used)) static struct hlsl_ir_swizzle *FUNC_2(struct hlsl_ir_node *VAR_3, const char *VAR_4,
        struct source_location *VAR_5)
{
    unsigned int VAR_6 = FUNC_1(VAR_4), VAR_7 = 0;
    unsigned int VAR_8, VAR_9, VAR_10 = 0;
    BOOL VAR_11;

    if (VAR_3->data_type->type == VAR_1)
    {

        BOOL VAR_12;
        unsigned int VAR_13, VAR_14, VAR_15;

        if (VAR_6 < 3 || VAR_4[0] != '_')
            return ((void*)0);
        VAR_12 = VAR_4[1] == 'm';
        VAR_13 = VAR_12 ? 4 : 3;

        if (VAR_6 % VAR_13 || VAR_6 > VAR_13 * 4)
            return ((void*)0);

        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += VAR_13)
        {
            if (VAR_4[VAR_8] != '_')
                return ((void*)0);
            if (VAR_12)
            {
                if (VAR_4[VAR_8 + 1] != 'm')
                    return ((void*)0);
                VAR_14 = VAR_4[VAR_8 + 2] - '0';
                VAR_15 = VAR_4[VAR_8 + 3] - '0';
            }
            else
            {
                VAR_14 = VAR_4[VAR_8 + 1] - '1';
                VAR_15 = VAR_4[VAR_8 + 2] - '1';
            }

            if (VAR_14 >= VAR_3->data_type->dimx || VAR_15 >= VAR_3->data_type->dimy)
                return ((void*)0);
            VAR_10 |= (VAR_15 << 4 | VAR_14) << VAR_7 * 8;
            VAR_7++;
        }
        return FUNC_0(VAR_10, VAR_7, VAR_3, VAR_5);
    }


    if (VAR_6 > 4)
        return ((void*)0);

    for (VAR_9 = 0; VAR_9 < 2; ++VAR_9)
    {
        VAR_11 = VAR_2;
        VAR_7 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
        {
            char VAR_16[2][4] = {{'x', 'y', 'z', 'w'}, {'r', 'g', 'b', 'a'}};
            unsigned int VAR_17 = 0;

            for (VAR_17 = 0; VAR_17 < 4; ++VAR_17)
            {
                if (VAR_4[VAR_8] == VAR_16[VAR_9][VAR_17])
                    break;
            }
            if (VAR_17 == 4)
            {
                VAR_11 = VAR_0;
                break;
            }

            if (VAR_17 >= VAR_3->data_type->dimx)
                return ((void*)0);
            VAR_10 |= VAR_17 << VAR_7 * 2;
            VAR_7++;
        }
        if (VAR_11)
            return FUNC_0(VAR_10, VAR_7, VAR_3, VAR_5);
    }

    return ((void*)0);
}
