
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int TYPE_OF_MEMORY ;
typedef int SIZE_T ;
typedef int * PVOID ;
typedef scalar_t__ PFN_NUMBER ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,...) ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

PVOID FUNC_7(SIZE_T VAR_8, TYPE_OF_MEMORY VAR_9)
{
    PFN_NUMBER VAR_10;
    PFN_NUMBER VAR_11;
    PVOID VAR_12;

    if (VAR_8 == 0)
    {
        FUNC_6("MmAllocateMemory() called for 0 bytes. Returning NULL.\n");
        FUNC_5("Memory allocation failed: MmAllocateMemory() called for 0 bytes.");
        return ((void*)0);
    }

    VAR_8 = FUNC_3(VAR_8, 4);



    VAR_10 = FUNC_3(VAR_8, VAR_3) / VAR_3;



    if (VAR_1 < VAR_10)
    {
        FUNC_0("Memory allocation failed in MmAllocateMemory(). Not enough free memory to allocate %d bytes.\n", VAR_8);
        FUNC_5("Memory allocation failed: out of memory.");
        return ((void*)0);
    }

    VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_10, VAR_0);

    if (VAR_11 == 0)
    {
        FUNC_0("Memory allocation failed in MmAllocateMemory(). Not enough free memory to allocate %d bytes.\n", VAR_8);
        FUNC_5("Memory allocation failed: out of memory.");
        return ((void*)0);
    }

    FUNC_1(VAR_6, VAR_11, VAR_10, VAR_9);

    VAR_1 -= VAR_10;
    VAR_12 = (PVOID)((ULONG_PTR)VAR_11 * VAR_3);

    FUNC_4("Allocated %d bytes (%d pages) of memory (type %ld) starting at page 0x%lx.\n",
          VAR_8, VAR_10, VAR_9, VAR_11);
    FUNC_4("Memory allocation pointer: 0x%x\n", *VAR_12);


    if ((((ULONG_PTR)VAR_12 + VAR_8 + VAR_5 - 1) >> VAR_4) > VAR_2)
        VAR_2 = (((ULONG_PTR)VAR_12 + VAR_8 + VAR_5 - 1) >> VAR_4);


    return VAR_12;
}
