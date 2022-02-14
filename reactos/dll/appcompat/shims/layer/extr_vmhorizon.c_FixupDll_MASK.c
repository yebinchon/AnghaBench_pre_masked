
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {scalar_t__ DllBase; int BaseDllName; } ;
typedef int SIZE_T ;
typedef int Replacement3 ;
typedef int Replacement2 ;
typedef int Replacement1 ;
typedef TYPE_1__* PLDR_DATA_TABLE_ENTRY ;
typedef scalar_t__ PBYTE ;
typedef int Match3 ;
typedef int Match2 ;
typedef int Match1 ;


 int FUNC_0 (char*,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int*,int,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__,int*,int) ;
 scalar_t__ FUNC_6 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_7(PLDR_DATA_TABLE_ENTRY VAR_3)
{
    static const UCHAR VAR_4[5] = { 0x0C, 0x8B, 0xFC, 0xF3, 0xA5 };
    static const UCHAR VAR_5[5] = { 0x0C, 0x8B, 0xFC, 0xF3, 0xA5 };
    static const UCHAR VAR_6[5] = { 0xB0, 0x8B, 0xFC, 0xF3, 0xA5 };
    UCHAR VAR_7[5] = { 0x10, 0x89, 0x34, 0x24, 0x90 };
    UCHAR VAR_8[5] = { 0x10, 0x89, 0x34, 0x24, 0x90 };
    UCHAR VAR_9[5] = { 0xB4, 0x89, 0x34, 0x24, 0x90 };





    UCHAR VAR_10[5];
    PBYTE VAR_11 = VAR_3->DllBase;
    SIZE_T VAR_12;






    do {
        FUNC_0("Module %wZ Loaded at 0x%p, we should patch!\n", &VAR_3->BaseDllName, VAR_3->DllBase);
        if (!FUNC_1(FUNC_4(FUNC_2(), VAR_11 + 0x21A6E, VAR_10, 5, &VAR_12)) || VAR_12 != 5)
            break;
        if (FUNC_6(VAR_10, VAR_4, sizeof(VAR_4)))
            break;

        if (!FUNC_1(FUNC_4(FUNC_2(), VAR_11 + 0x21B04, VAR_10, 5, &VAR_12)) || VAR_12 != 5)
            break;
        if (FUNC_6(VAR_10, VAR_5, sizeof(VAR_5)))
            break;

        if (!FUNC_1(FUNC_4(FUNC_2(), VAR_11 + 0x21C3C, VAR_10, 5, &VAR_12)) || VAR_12 != 5)
            break;
        if (FUNC_6(VAR_10, VAR_6, sizeof(VAR_6)))
            break;

        FUNC_0("Module %wZ Loaded at 0x%p, OK to patch!\n", &VAR_3->BaseDllName, VAR_3->DllBase);
        if (!FUNC_5(VAR_11 + 0x21A6E, VAR_7, sizeof(VAR_7)))
            break;
        if (!FUNC_5(VAR_11 + 0x21B04, VAR_8, sizeof(VAR_8)))
            break;
        if (!FUNC_5(VAR_11 + 0x21C3C, VAR_9, sizeof(VAR_9)))
            break;

        FUNC_3(FUNC_2(), VAR_11, 0x22000);

        FUNC_0("Module %wZ Loaded at 0x%p, patched!\n", &VAR_3->BaseDllName, VAR_3->DllBase);
    } while (0);
}
