
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ UCHAR ;
typedef size_t SIZE_T ;
typedef scalar_t__* PVOID ;
typedef scalar_t__* PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static
BOOLEAN
FUNC_1(
    PVOID VAR_2,
    SIZE_T VAR_3,
    UCHAR VAR_4)
{
    PUCHAR VAR_5 = VAR_2;
    SIZE_T VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        if (VAR_5[VAR_6] != VAR_4)
        {
            FUNC_0("Expected %x, found %x at offset %lu\n", VAR_4, VAR_5[VAR_6], (ULONG)VAR_6);
            return VAR_0;
        }
    return VAR_1;
}
