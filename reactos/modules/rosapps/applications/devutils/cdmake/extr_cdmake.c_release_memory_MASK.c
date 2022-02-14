
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* buffer; } ;
struct TYPE_9__ {TYPE_1__* joliet_name; TYPE_1__* next_in_memory; } ;
struct TYPE_8__ {struct TYPE_8__* joliet_name; struct TYPE_8__* next_in_memory; struct TYPE_8__* entry_list; struct TYPE_8__* next_entry; struct TYPE_8__* next_header; } ;
typedef TYPE_1__* PDIR_RECORD ;
typedef TYPE_1__* PBOOT_HEADER ;
typedef TYPE_1__* PBOOT_ENTRY ;


 TYPE_1__* VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{
    while (VAR_0)
    {
        PBOOT_HEADER VAR_4 = VAR_0->next_header;

        while (VAR_0->entry_list)
        {
            PBOOT_ENTRY VAR_5 = VAR_0->entry_list->next_entry;
            FUNC_0(VAR_0->entry_list);
            VAR_0->entry_list = VAR_5;
        }

        FUNC_0(VAR_0);
        VAR_0 = VAR_4;
    }

    while (VAR_3.next_in_memory != ((void*)0))
    {
        PDIR_RECORD VAR_6 = VAR_3.next_in_memory->next_in_memory;
        if (VAR_2)
            FUNC_0(VAR_3.next_in_memory->joliet_name);
        FUNC_0(VAR_3.next_in_memory);
        VAR_3.next_in_memory = VAR_6;
    }
    if (VAR_2)
        FUNC_0(VAR_3.joliet_name);

    if (VAR_1.buffer != ((void*)0))
    {
        FUNC_0(VAR_1.buffer);
        VAR_1.buffer = ((void*)0);
    }
}
