
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef size_t SIZE_T ;
typedef scalar_t__* PVOID ;
typedef scalar_t__* PBYTE ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static
BOOLEAN
FUNC_3(
    PVOID VAR_2,
    SIZE_T VAR_3)
{
    PBYTE VAR_4 = VAR_2;
    SIZE_T VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
        if (VAR_4[VAR_5] != FUNC_1(VAR_5))
        {
            FUNC_2("Mismatch in region %p at index %lu. Value=%02x\n", VAR_2, (ULONG)VAR_5, VAR_4[VAR_5]);
            FUNC_0(VAR_0);
            return VAR_0;
        }
    return VAR_1;
}
