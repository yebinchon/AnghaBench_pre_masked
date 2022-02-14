
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d8_handle_table {size_t entry_count; struct d3d8_handle_entry* entries; } ;
struct d3d8_handle_entry {int type; void* object; } ;
typedef enum d3d8_handle_type { ____Placeholder_d3d8_handle_type } d3d8_handle_type ;
typedef size_t DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,...) ;

__attribute__((used)) static void *FUNC_1(struct d3d8_handle_table *VAR_1, DWORD VAR_2, enum d3d8_handle_type VAR_3)
{
    struct d3d8_handle_entry *VAR_4;

    if (VAR_2 == VAR_0 || VAR_2 >= VAR_1->entry_count)
    {
        FUNC_0("Invalid handle %u passed.\n", VAR_2);
        return ((void*)0);
    }

    VAR_4 = &VAR_1->entries[VAR_2];
    if (VAR_4->type != VAR_3)
    {
        FUNC_0("Handle %u(%p) is not of type %#x.\n", VAR_2, VAR_4, VAR_3);
        return ((void*)0);
    }

    return VAR_4->object;
}
