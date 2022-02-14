
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_const_tab {unsigned int input_count; int * inputs_param; int update_version; } ;
typedef int ULONG64 ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static BOOL FUNC_2(struct d3dx_const_tab *VAR_3, ULONG64 VAR_4)
{
    unsigned int VAR_5;

    if (VAR_4 == VAR_2)
        VAR_4 = VAR_3->update_version;
    for (VAR_5 = 0; VAR_5 < VAR_3->input_count; ++VAR_5)
    {
        if (FUNC_0(FUNC_1(VAR_3->inputs_param[VAR_5]),
                VAR_4))
            return VAR_1;
    }
    return VAR_0;
}
