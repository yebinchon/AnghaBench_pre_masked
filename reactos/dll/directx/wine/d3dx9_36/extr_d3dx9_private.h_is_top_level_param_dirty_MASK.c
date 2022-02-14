
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_top_level_parameter {scalar_t__ update_version; struct d3dx_shared_data* shared_data; } ;
struct d3dx_shared_data {scalar_t__ update_version; } ;
typedef scalar_t__ ULONG64 ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(struct d3dx_top_level_parameter *VAR_0, ULONG64 VAR_1)
{
    struct d3dx_shared_data *VAR_2;

    if ((VAR_2 = VAR_0->shared_data))
        return VAR_1 < VAR_2->update_version;
    else
        return VAR_1 < VAR_0->update_version;
}
