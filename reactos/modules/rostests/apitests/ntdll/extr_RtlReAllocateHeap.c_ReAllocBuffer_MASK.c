
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SIZE_T ;
typedef scalar_t__ PUCHAR ;
typedef int PCSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*,scalar_t__,int ) ;

__attribute__((used)) static
BOOLEAN
FUNC_8(
    PUCHAR *VAR_3,
    SIZE_T VAR_4,
    SIZE_T *VAR_5,
    PCSTR VAR_6)
{
    PUCHAR VAR_7;
    SIZE_T VAR_8 = *VAR_5;

    FUNC_1(*VAR_3, VAR_8, 0x7a);
    VAR_7 = FUNC_3(FUNC_2(),
                                  VAR_1,
                                  *VAR_3,
                                  VAR_4);
    if (!VAR_7)
    {
        FUNC_7("RtlReAllocateHeap failed for size %lu (%s)\n", VAR_4, VAR_6);
        return VAR_0;
    }
    *VAR_3 = VAR_7;
    FUNC_6(FUNC_4(FUNC_2(), 0, VAR_7), VAR_4);
    if (VAR_8 < VAR_4)
    {
        FUNC_5(FUNC_0(VAR_7, VAR_8, 0x7a), "CheckBuffer failed at size 0x%lx -> 0x%lx\n", VAR_8, VAR_4);
        FUNC_5(FUNC_0(VAR_7 + VAR_8, VAR_4 - VAR_8, 0), "HEAP_ZERO_MEMORY not respected for 0x%lx -> 0x%lx\n", VAR_8, VAR_4);
    }
    else
    {
        FUNC_5(FUNC_0(VAR_7, VAR_4, 0x7a), "CheckBuffer failed at size 0x%lx -> 0x%lx\n", VAR_8, VAR_4);
    }
    *VAR_5 = VAR_4;
    return VAR_2;
}
