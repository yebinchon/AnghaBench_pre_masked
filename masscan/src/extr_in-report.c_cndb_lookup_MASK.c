
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CNDB_Entry {unsigned int ip; char const* name; struct CNDB_Entry* next; } ;
struct TYPE_2__ {struct CNDB_Entry** entries; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(unsigned VAR_1)
{
    const struct CNDB_Entry *VAR_2;

    if (VAR_0 == ((void*)0))
        return 0;

    VAR_2 = VAR_0->entries[VAR_1&0xFFFF];
    while (VAR_2 && VAR_2->ip != VAR_1)
        VAR_2 = VAR_2->next;
    if (VAR_2)
        return VAR_2->name;
    else {
        return 0;
    }
}
