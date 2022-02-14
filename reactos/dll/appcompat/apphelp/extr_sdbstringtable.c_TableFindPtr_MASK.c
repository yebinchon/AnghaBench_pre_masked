
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SdbStringHashTable {size_t Size; struct SdbHashEntry** Entries; } ;
struct SdbHashEntry {struct SdbHashEntry* Next; int Name; } ;
typedef int WCHAR ;
typedef size_t DWORD ;


 int FUNC_0 (int ,int const*) ;
 size_t FUNC_1 (int const*) ;

__attribute__((used)) static struct SdbHashEntry** FUNC_2(struct SdbStringHashTable* VAR_0, const WCHAR* VAR_1)
{
    DWORD VAR_2 = FUNC_1(VAR_1);
    struct SdbHashEntry** VAR_3 = &VAR_0->Entries[VAR_2 % VAR_0->Size];
    while (*VAR_3)
    {
        if (!FUNC_0((*VAR_3)->Name, VAR_1))
            return VAR_3;
        VAR_3 = &(*VAR_3)->Next;
    }
    return VAR_3;
}
