
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GenericTable {scalar_t__ entries; int numEntries; } ;
typedef int compareFunc ;
typedef int UINT ;
typedef int BYTE ;


 void* FUNC_0 (void const*,scalar_t__,int ,size_t,int ) ;

__attribute__((used)) static UINT FUNC_1(const void *VAR_0,
    struct GenericTable *VAR_1, size_t VAR_2, compareFunc VAR_3)
{
    UINT VAR_4 = 0;
    void *VAR_5;

    VAR_5 = FUNC_0(VAR_0, VAR_1->entries, VAR_1->numEntries, VAR_2,
        VAR_3);
    if (VAR_5)
        VAR_4 = ((BYTE *)VAR_5 - (BYTE *)VAR_1->entries) / VAR_2 + 1;
    return VAR_4;
}
