
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d8_handle_table {size_t entry_count; struct d3d8_handle_entry* free_entries; struct d3d8_handle_entry* entries; } ;
struct d3d8_handle_entry {int type; struct d3d8_handle_entry* object; } ;
typedef enum d3d8_handle_type { ____Placeholder_d3d8_handle_type } d3d8_handle_type ;
typedef size_t DWORD ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,...) ;

__attribute__((used)) static void *FUNC_1(struct d3d8_handle_table *VAR_2, DWORD VAR_3, enum d3d8_handle_type VAR_4)
{
    struct d3d8_handle_entry *VAR_5;
    void *VAR_6;

    if (VAR_3 == VAR_1 || VAR_3 >= VAR_2->entry_count)
    {
        FUNC_0("Invalid handle %u passed.\n", VAR_3);
        return ((void*)0);
    }

    VAR_5 = &VAR_2->entries[VAR_3];
    if (VAR_5->type != VAR_4)
    {
        FUNC_0("Handle %u(%p) is not of type %#x.\n", VAR_3, VAR_5, VAR_4);
        return ((void*)0);
    }

    VAR_6 = VAR_5->object;
    VAR_5->object = VAR_2->free_entries;
    VAR_5->type = VAR_0;
    VAR_2->free_entries = VAR_5;

    return VAR_6;
}
