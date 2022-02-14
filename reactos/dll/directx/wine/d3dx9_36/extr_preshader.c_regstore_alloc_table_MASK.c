
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_regstore {int * tables; int * table_sizes; } ;
struct TYPE_2__ {unsigned int component_size; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(struct d3dx_regstore *VAR_4, unsigned int VAR_5)
{
    unsigned int VAR_6;

    VAR_6 = FUNC_2(VAR_5, VAR_4->table_sizes[VAR_5]) * VAR_3[VAR_5].component_size;
    if (VAR_6)
    {
        VAR_4->tables[VAR_5] = FUNC_1(FUNC_0(), VAR_2, VAR_6);
        if (!VAR_4->tables[VAR_5])
            return VAR_1;
    }
    return VAR_0;
}
