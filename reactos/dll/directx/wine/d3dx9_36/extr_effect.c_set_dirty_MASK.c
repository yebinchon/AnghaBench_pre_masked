
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_top_level_parameter {void* update_version; struct d3dx_shared_data* shared_data; int version_counter; } ;
struct d3dx_shared_data {void* update_version; } ;
struct d3dx_parameter {struct d3dx_top_level_parameter* top_level_param; } ;
typedef void* ULONG64 ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct d3dx_parameter *VAR_0)
{
    struct d3dx_shared_data *VAR_1;
    struct d3dx_top_level_parameter *VAR_2 = VAR_0->top_level_param;
    ULONG64 VAR_3 = FUNC_0(VAR_2->version_counter);

    if ((VAR_1 = VAR_2->shared_data))
        VAR_1->update_version = VAR_3;
    else
        VAR_2->update_version = VAR_3;
}
