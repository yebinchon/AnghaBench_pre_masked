
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d8_handle_table {size_t entry_count; size_t table_size; struct d3d8_handle_entry* entries; struct d3d8_handle_entry* free_entries; } ;
struct d3d8_handle_entry {int type; struct d3d8_handle_entry* object; } ;
typedef enum d3d8_handle_type { ____Placeholder_d3d8_handle_type } d3d8_handle_type ;
typedef int UINT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct d3d8_handle_entry* FUNC_1 (struct d3d8_handle_entry*,int) ;

__attribute__((used)) static DWORD FUNC_2(struct d3d8_handle_table *VAR_2, void *VAR_3, enum d3d8_handle_type VAR_4)
{
    struct d3d8_handle_entry *VAR_5;

    if (VAR_2->free_entries)
    {
        DWORD VAR_6 = VAR_2->free_entries - VAR_2->entries;

        VAR_5 = VAR_2->free_entries;
        if (VAR_5->type != VAR_0)
        {
            FUNC_0("Handle %u(%p) is in the free list, but has type %#x.\n", VAR_6, VAR_5, VAR_5->type);
            return VAR_1;
        }
        VAR_2->free_entries = VAR_5->object;
        VAR_5->object = VAR_3;
        VAR_5->type = VAR_4;

        return VAR_6;
    }

    if (!(VAR_2->entry_count < VAR_2->table_size))
    {

        UINT VAR_7 = VAR_2->table_size + (VAR_2->table_size >> 1);
        struct d3d8_handle_entry *VAR_8;

        if (!(VAR_8 = FUNC_1(VAR_2->entries, VAR_7 * sizeof(*VAR_2->entries))))
        {
            FUNC_0("Failed to grow the handle table.\n");
            return VAR_1;
        }
        VAR_2->entries = VAR_8;
        VAR_2->table_size = VAR_7;
    }

    VAR_5 = &VAR_2->entries[VAR_2->entry_count];
    VAR_5->object = VAR_3;
    VAR_5->type = VAR_4;

    return VAR_2->entry_count++;
}
