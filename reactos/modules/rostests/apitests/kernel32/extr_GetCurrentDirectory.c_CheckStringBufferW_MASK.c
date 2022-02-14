
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__ VOID ;
typedef scalar_t__ const ULONG ;
typedef scalar_t__ const UCHAR ;
typedef size_t SIZE_T ;
typedef scalar_t__ const* PCWSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_1 (char*,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;
 size_t FUNC_2 (scalar_t__ const*) ;

__attribute__((used)) static
BOOLEAN
FUNC_3(
    const VOID *VAR_2,
    SIZE_T VAR_3,
    PCWSTR VAR_4,
    UCHAR VAR_5)
{
    const WCHAR *VAR_6 = VAR_2;
    const UCHAR *VAR_7 = VAR_2;
    SIZE_T VAR_8 = FUNC_2(VAR_4);
    SIZE_T VAR_9;

    if (VAR_3 < VAR_8)
    {
        FUNC_0(0, "Size = %lu, Length = %lu\n", (ULONG)VAR_3, (ULONG)VAR_8);
        return VAR_0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        if (VAR_6[VAR_9] != VAR_4[VAR_9])
        {
            FUNC_1("Expected %x, found %x at offset %lu\n", VAR_4[VAR_9], VAR_6[VAR_9], (ULONG)VAR_9);
            return VAR_0;
        }

    FUNC_0(VAR_6[VAR_9] == 0, "Expected null terminator, found %x at offset %lu\n", VAR_6[VAR_9], (ULONG)VAR_9);
    VAR_9++;

    VAR_9 *= sizeof(WCHAR);

    for (; VAR_9 < VAR_3; VAR_9++)
        if (VAR_7[VAR_9] != VAR_5)
        {
            FUNC_1("Expected %x, found %x at offset %lu\n", VAR_5, VAR_7[VAR_9], (ULONG)VAR_9);
            return VAR_0;
        }
    return VAR_1;
}
