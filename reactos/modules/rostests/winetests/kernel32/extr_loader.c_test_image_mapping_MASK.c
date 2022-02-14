
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int info ;
struct TYPE_10__ {int VirtualAddress; } ;
struct TYPE_7__ {scalar_t__ HighPart; scalar_t__ LowPart; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_8__ {char* BaseAddress; void* AllocationBase; int AllocationProtect; int State; int Type; int Protect; int RegionSize; } ;
typedef int SIZE_T ;
typedef int NTSTATUS ;
typedef TYPE_2__ MEMORY_BASIC_INFORMATION ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 void* FUNC_6 (char const*) ;
 int VAR_4 ;
 void* FUNC_7 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (char*,TYPE_2__*,int) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (scalar_t__,int ,void**,int ,int ,TYPE_3__*,int*,int,int ,int) ;
 int FUNC_13 (int ,void*) ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;

__attribute__((used)) static void FUNC_14(const char *VAR_13, DWORD VAR_14, BOOL VAR_15)
{
    HANDLE VAR_16, VAR_17;
    NTSTATUS VAR_18;
    LARGE_INTEGER VAR_19;
    SIZE_T VAR_20;
    void *VAR_21, *VAR_22;
    MEMORY_BASIC_INFORMATION VAR_23;

    if (!&FUNC_12) return;

    FUNC_8(0xdeadbeef);
    VAR_16 = FUNC_1(VAR_13, VAR_2, VAR_1, ((void*)0), VAR_5, 0, 0);
    FUNC_11(VAR_16 != VAR_3, "CreateFile error %d\n", FUNC_5());

    FUNC_8(0xdeadbeef);
    VAR_17 = FUNC_2(VAR_16, ((void*)0), VAR_7 | VAR_8, 0, 0, 0);
    FUNC_11(VAR_17 != 0, "CreateFileMapping error %d\n", FUNC_5());

    VAR_19.u.LowPart = 0;
    VAR_19.u.HighPart = 0;

    VAR_21 = ((void*)0);
    VAR_20 = 0;
    VAR_18 = FUNC_12(VAR_17, FUNC_4(), &VAR_21, 0, 0, &VAR_19,
                                 &VAR_20, 1 , 0, VAR_7);
    FUNC_11(VAR_18 == VAR_10, "NtMapViewOfSection error %x\n", VAR_18);
    FUNC_11(VAR_21 != 0, "mapped address should be valid\n");

    FUNC_8(0xdeadbeef);
    VAR_20 = FUNC_10((char *)VAR_21 + VAR_12.VirtualAddress, &VAR_23, sizeof(VAR_23));
    FUNC_11(VAR_20 == sizeof(VAR_23), "VirtualQuery error %d\n", FUNC_5());
    FUNC_11(VAR_23.BaseAddress == (char *)VAR_21 + VAR_12.VirtualAddress, "got %p != expected %p\n", VAR_23.BaseAddress, (char *)VAR_21 + VAR_12.VirtualAddress);
    FUNC_11(VAR_23.RegionSize == VAR_11, "got %#lx != expected %#x\n", VAR_23.RegionSize, VAR_11);
    FUNC_11(VAR_23.Protect == VAR_14, "got %#x != expected %#x\n", VAR_23.Protect, VAR_14);
    FUNC_11(VAR_23.AllocationBase == VAR_21, "%p != %p\n", VAR_23.AllocationBase, VAR_21);
    FUNC_11(VAR_23.AllocationProtect == VAR_6, "%#x != PAGE_EXECUTE_WRITECOPY\n", VAR_23.AllocationProtect);
    FUNC_11(VAR_23.State == VAR_4, "%#x != MEM_COMMIT\n", VAR_23.State);
    FUNC_11(VAR_23.Type == VAR_8, "%#x != SEC_IMAGE\n", VAR_23.Type);

    VAR_22 = ((void*)0);
    VAR_20 = 0;
    VAR_18 = FUNC_12(VAR_17, FUNC_4(), &VAR_22, 0, 0, &VAR_19,
                                 &VAR_20, 1 , 0, VAR_7);
    FUNC_11(VAR_18 == VAR_9, "expected STATUS_IMAGE_NOT_AT_BASE, got %x\n", VAR_18);
    FUNC_11(VAR_22 != 0, "mapped address should be valid\n");
    FUNC_11(VAR_22 != VAR_21, "mapped addresses should be different\n");

    FUNC_8(0xdeadbeef);
    VAR_20 = FUNC_10((char *)VAR_22 + VAR_12.VirtualAddress, &VAR_23, sizeof(VAR_23));
    FUNC_11(VAR_20 == sizeof(VAR_23), "VirtualQuery error %d\n", FUNC_5());
    FUNC_11(VAR_23.BaseAddress == (char *)VAR_22 + VAR_12.VirtualAddress, "got %p != expected %p\n", VAR_23.BaseAddress, (char *)VAR_22 + VAR_12.VirtualAddress);
    FUNC_11(VAR_23.RegionSize == VAR_11, "got %#lx != expected %#x\n", VAR_23.RegionSize, VAR_11);
    FUNC_11(VAR_23.Protect == VAR_14, "got %#x != expected %#x\n", VAR_23.Protect, VAR_14);
    FUNC_11(VAR_23.AllocationBase == VAR_22, "%p != %p\n", VAR_23.AllocationBase, VAR_22);
    FUNC_11(VAR_23.AllocationProtect == VAR_6, "%#x != PAGE_EXECUTE_WRITECOPY\n", VAR_23.AllocationProtect);
    FUNC_11(VAR_23.State == VAR_4, "%#x != MEM_COMMIT\n", VAR_23.State);
    FUNC_11(VAR_23.Type == VAR_8, "%#x != SEC_IMAGE\n", VAR_23.Type);

    VAR_18 = FUNC_13(FUNC_4(), VAR_22);
    FUNC_11(VAR_18 == VAR_10, "NtUnmapViewOfSection error %x\n", VAR_18);

    VAR_22 = FUNC_7(VAR_17, 0, 0, 0, 0);
    FUNC_11(VAR_22 != 0, "mapped address should be valid\n");
    FUNC_11(VAR_22 != VAR_21, "mapped addresses should be different\n");

    FUNC_8(0xdeadbeef);
    VAR_20 = FUNC_10((char *)VAR_22 + VAR_12.VirtualAddress, &VAR_23, sizeof(VAR_23));
    FUNC_11(VAR_20 == sizeof(VAR_23), "VirtualQuery error %d\n", FUNC_5());
    FUNC_11(VAR_23.BaseAddress == (char *)VAR_22 + VAR_12.VirtualAddress, "got %p != expected %p\n", VAR_23.BaseAddress, (char *)VAR_22 + VAR_12.VirtualAddress);
    FUNC_11(VAR_23.RegionSize == VAR_11, "got %#lx != expected %#x\n", VAR_23.RegionSize, VAR_11);
    FUNC_11(VAR_23.Protect == VAR_14, "got %#x != expected %#x\n", VAR_23.Protect, VAR_14);
    FUNC_11(VAR_23.AllocationBase == VAR_22, "%p != %p\n", VAR_23.AllocationBase, VAR_22);
    FUNC_11(VAR_23.AllocationProtect == VAR_6, "%#x != PAGE_EXECUTE_WRITECOPY\n", VAR_23.AllocationProtect);
    FUNC_11(VAR_23.State == VAR_4, "%#x != MEM_COMMIT\n", VAR_23.State);
    FUNC_11(VAR_23.Type == VAR_8, "%#x != SEC_IMAGE\n", VAR_23.Type);

    FUNC_9(VAR_22);

    FUNC_8(0xdeadbeef);
    VAR_22 = FUNC_6(VAR_13);
    if (VAR_15)
    {
        FUNC_11(!VAR_22, "LoadLibrary should fail, is_dll %d\n", VAR_15);
        FUNC_11(FUNC_5() == VAR_0, "expected ERROR_INVALID_ADDRESS, got %d\n", FUNC_5());
    }
    else
    {
        BOOL VAR_24;
        FUNC_11(VAR_22 != 0, "LoadLibrary error %d, is_dll %d\n", FUNC_5(), VAR_15);
        FUNC_11(VAR_22 != VAR_21, "mapped addresses should be different\n");

        FUNC_8(0xdeadbeef);
        VAR_24 = FUNC_3(VAR_22);
        FUNC_11(VAR_24, "FreeLibrary error %d\n", FUNC_5());
    }

    VAR_18 = FUNC_13(FUNC_4(), VAR_21);
    FUNC_11(VAR_18 == VAR_10, "NtUnmapViewOfSection error %x\n", VAR_18);

    FUNC_0(VAR_17);
    FUNC_0(VAR_16);
}
