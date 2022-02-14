
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SdbStringHashTable {int Size; void* Entries; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static struct SdbStringHashTable* FUNC_2(void)
{
    struct SdbStringHashTable* VAR_1 = FUNC_1(sizeof(*VAR_1));
    if (!VAR_1)
    {
        FUNC_0("Failed to allocate 8 bytes.\r\n");
        return VAR_1;
    }
    VAR_1->Size = VAR_0;
    VAR_1->Entries = FUNC_1(VAR_1->Size * sizeof(*VAR_1->Entries));
    return VAR_1;
}
