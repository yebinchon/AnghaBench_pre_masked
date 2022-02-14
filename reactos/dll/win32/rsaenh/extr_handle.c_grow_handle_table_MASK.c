
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle_table_entry {unsigned int iNextFree; int * pObject; } ;
struct handle_table {unsigned int iEntries; struct handle_table_entry* paEntries; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct handle_table_entry* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,struct handle_table_entry*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct handle_table_entry*,struct handle_table_entry*,int) ;

__attribute__((used)) static BOOL FUNC_4(struct handle_table *VAR_3)
{
    struct handle_table_entry *VAR_4;
    unsigned int VAR_5, VAR_6;

    VAR_6 = VAR_3->iEntries + VAR_1;

    VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(struct handle_table_entry)*VAR_6);
    if (!VAR_4)
        return VAR_0;

    if (VAR_3->paEntries)
    {
        FUNC_3(VAR_4, VAR_3->paEntries, sizeof(struct handle_table_entry)*VAR_3->iEntries);
        FUNC_2(FUNC_0(), 0, VAR_3->paEntries);
    }

    for (VAR_5=VAR_3->iEntries; VAR_5<VAR_6; VAR_5++)
    {
        VAR_4[VAR_5].pObject = ((void*)0);
        VAR_4[VAR_5].iNextFree = VAR_5+1;
    }

    VAR_3->paEntries = VAR_4;
    VAR_3->iEntries = VAR_6;

    return VAR_2;
}
