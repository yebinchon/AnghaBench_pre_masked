
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx9_base_effect {int version_counter; TYPE_1__* pool; } ;
typedef int ULONG64 ;
struct TYPE_2__ {int version_counter; } ;



__attribute__((used)) static ULONG64 *FUNC_0(struct d3dx9_base_effect *VAR_0)
{
    return VAR_0->pool ? &VAR_0->pool->version_counter : &VAR_0->version_counter;
}
