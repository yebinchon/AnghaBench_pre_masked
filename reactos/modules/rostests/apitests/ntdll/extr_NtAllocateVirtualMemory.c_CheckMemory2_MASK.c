
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
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static
BOOLEAN
FUNC_3(
    PVOID VAR_3,
    SIZE_T VAR_4)
{
    PBYTE VAR_5 = VAR_3;
    SIZE_T VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
        if (VAR_5[VAR_6] != VAR_2 - FUNC_1(VAR_6))
        {
            FUNC_2("Mismatch in region %p at index %lu. Value=%02x\n", VAR_3, (ULONG)VAR_6, VAR_5[VAR_6]);
            FUNC_0(VAR_0);
            return VAR_0;
        }
    return VAR_1;
}
