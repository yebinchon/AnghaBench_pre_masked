
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int TYPE_OF_MEMORY ;
typedef int SIZE_T ;
typedef int * PVOID ;
typedef scalar_t__ PFN_NUMBER ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,int *,...) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

PVOID FUNC_7(SIZE_T VAR_6, PVOID VAR_7, TYPE_OF_MEMORY VAR_8)
{
    PFN_NUMBER VAR_9;
    PFN_NUMBER VAR_10;
    PFN_NUMBER VAR_11;
    PVOID VAR_12;

    if (VAR_6 == 0)
    {
        FUNC_6("MmAllocateHighestMemoryBelowAddress() called for 0 bytes. Returning NULL.\n");
        FUNC_5("Memory allocation failed: MmAllocateHighestMemoryBelowAddress() called for 0 bytes.");
        return ((void*)0);
    }



    VAR_9 = FUNC_3(VAR_6, VAR_2) / VAR_2;


    VAR_11 = (ULONG_PTR)VAR_7 / VAR_2;



    if (VAR_0 < VAR_9)
    {
        FUNC_0("Memory allocation failed in MmAllocateHighestMemoryBelowAddress(). Not enough free memory to allocate %d bytes.\n", VAR_6);
        FUNC_5("Memory allocation failed: out of memory.");
        return ((void*)0);
    }

    VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_9, VAR_11);

    if (VAR_10 == 0)
    {
        FUNC_0("Memory allocation failed in MmAllocateHighestMemoryBelowAddress(). Not enough free memory to allocate %d bytes.\n", VAR_6);
        FUNC_5("Memory allocation failed: out of memory.");
        return ((void*)0);
    }

    FUNC_1(VAR_4, VAR_10, VAR_9, VAR_8);

    VAR_0 -= VAR_9;
    VAR_12 = (PVOID)((ULONG_PTR)VAR_10 * VAR_2);

    FUNC_4("Allocated %d bytes (%d pages) of memory starting at page %d.\n", &VAR_6, VAR_9, VAR_10);
    FUNC_4("Memory allocation pointer: 0x%x\n", VAR_12);


    if ((((ULONG_PTR)VAR_12 + VAR_6) >> VAR_3) > VAR_1)
        VAR_1 = (((ULONG_PTR)VAR_12 + VAR_6) >> VAR_3);


    return VAR_12;
}
