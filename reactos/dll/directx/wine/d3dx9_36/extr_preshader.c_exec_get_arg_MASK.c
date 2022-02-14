
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct d3dx_regstore {unsigned int* table_sizes; } ;
struct TYPE_4__ {unsigned int table; unsigned int offset; } ;
struct TYPE_3__ {scalar_t__ table; unsigned int offset; } ;
struct d3dx_pres_operand {TYPE_2__ reg; TYPE_1__ index_reg; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 double FUNC_1 (struct d3dx_regstore*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (double) ;

__attribute__((used)) static double FUNC_6(struct d3dx_regstore *VAR_2, const struct d3dx_pres_operand *VAR_3, unsigned int VAR_4)
{
    unsigned int VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_8 = VAR_3->reg.table;

    if (VAR_3->index_reg.table == VAR_1)
        VAR_6 = 0;
    else
        VAR_6 = FUNC_5(FUNC_1(VAR_2, VAR_3->index_reg.table, VAR_3->index_reg.offset));

    VAR_5 = FUNC_2(VAR_8, VAR_6) + VAR_3->reg.offset + VAR_4;
    VAR_7 = FUNC_4(VAR_8, VAR_5);

    if (VAR_7 >= VAR_2->table_sizes[VAR_8])
    {
        unsigned int VAR_9;

        if (VAR_8 == VAR_0)
        {


            for (VAR_9 = 1; VAR_9 < VAR_2->table_sizes[VAR_8]; VAR_9 <<= 1)
                ;
        }
        else
        {
            VAR_9 = VAR_2->table_sizes[VAR_8];
        }
        FUNC_0("Wrapping register index %u, table %u, wrap_size %u, table size %u.\n",
                VAR_7, VAR_8, VAR_9, VAR_2->table_sizes[VAR_8]);
        VAR_7 %= VAR_9;

        if (VAR_7 >= VAR_2->table_sizes[VAR_8])
            return 0.0;

        VAR_5 = FUNC_2(VAR_8, VAR_7) + VAR_5 % FUNC_3(VAR_8);
    }

    return FUNC_1(VAR_2, VAR_8, VAR_5);
}
