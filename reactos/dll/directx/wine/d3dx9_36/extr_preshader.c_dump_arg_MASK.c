
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct d3dx_regstore {scalar_t__* tables; } ;
struct TYPE_4__ {unsigned int table; unsigned int offset; } ;
struct TYPE_3__ {unsigned int table; size_t offset; } ;
struct d3dx_pres_operand {TYPE_2__ reg; TYPE_1__ index_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,...) ;
 size_t FUNC_1 (size_t,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,size_t) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct d3dx_regstore *VAR_3, const struct d3dx_pres_operand *VAR_4, int VAR_5)
{
    static const char *VAR_6 = "xyzw";
    unsigned int VAR_7, VAR_8;

    VAR_8 = VAR_4->reg.table;
    if (VAR_8 == VAR_1 && VAR_4->index_reg.table == VAR_0)
    {
        FUNC_0("(");
        for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
            FUNC_0(VAR_7 < VAR_5 - 1 ? "%.16e, " : "%.16e",
                    ((double *)VAR_3->tables[VAR_1])[VAR_4->reg.offset + VAR_7]);
        FUNC_0(")");
    }
    else
    {
        if (VAR_4->index_reg.table == VAR_0)
        {
            FUNC_0("%s%u.", VAR_2[VAR_8], FUNC_2(VAR_8, VAR_4->reg.offset));
        }
        else
        {
            unsigned int VAR_9;

            VAR_9 = FUNC_2(VAR_4->index_reg.table, VAR_4->index_reg.offset);
            FUNC_0("%s[%u + %s%u.%c].", VAR_2[VAR_8], FUNC_2(VAR_8, VAR_4->reg.offset),
                    VAR_2[VAR_4->index_reg.table], VAR_9,
                    VAR_6[VAR_4->index_reg.offset - FUNC_1(VAR_4->index_reg.table, VAR_9)]);
        }
        for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
            FUNC_0("%c", VAR_6[(VAR_4->reg.offset + VAR_7) % 4]);
    }
}
